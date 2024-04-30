import tkinter as tk
from tkinter import filedialog
from board import Board
from allextetrominoes import *
from shape import Shape
from time import time, sleep
from copy import copy, deepcopy
import config


class TetrisEngine:
	def __init__(self):  # Programmable: pass a different parameter
		self.difficulty = config.difficulty
		if self.difficulty == "easy":
			self.extetromino_distribution = range(1, 8)
		elif self.difficulty == "medium":
			self.extetromino_distribution = range(1, 17)
		elif self.difficulty == "hard":
			self.extetromino_distribution = range(1, 74)
		else:
			print("Invalid difficulty level. Exiting...")
			exit()

		self.window = tk.Tk()  # fixed
		self.window.title(config.title)  # Programmable, inconsequential
		self.width = config.width  # Essential and programmable
		self.height = config.height  # Essential and programmable
		self.text_area = tk.Text(  # Essential and partially programmable
			self.window,  # fixed unless you populate more components
			wrap=tk.CHAR,  # programmable, please find some way not to let it wrap
			height=self.height,  # fixed
			width=2 * self.width,  # fixed
			bg=config.bg,  # programmable
			fg=config.fg,  # programmable
			font=config.font,  # programmable
		)
		self.text_area.pack(expand=tk.YES, fill=tk.BOTH)  # fixed
		self.board = Board(width=self.width, height=self.height)  # fixed
		self.pauseStatus = False  # fixed in the beginning, state variable
		self.window.bind(
			f"<{config.up_key}>", self.rotate_CW
		)  # semi-fixed: change by providing a new
		# callback: this is true of all the callbacks
		self.window.bind(f"<{config.left_key}>", self.move_left)  # callback
		self.window.bind(f"<{config.right_key}>", self.move_right)  # callback
		self.window.bind("<space>", self.drop_piece)  # callback
		self.window.bind(f"<{config.down_key}>", self.move_down_force)  # callback
		self.window.bind(f'<{config.pause_key}>', self.toggle_pause_status) # callback

		self.update_duration = 100  # More or less fixed
		self.window.after(self.update_duration, lambda: self.update_step())  # callback
		self.initial_move_down_duration = (
			1000  # fixed unless changing the initial behaviour
		)
		self.move_down_duration = (
			self.initial_move_down_duration
		)  # fixed, but its progression programmable
		self.window.after(
			self.move_down_duration, lambda: self.move_down_step()
		)  # callback
		self.default_cursor = (
			config.default_cursor
		)  # Programmable. Where the new piece appears
		self.cursor = self.default_cursor  # State variable.
		self.max_level = config.max_level
		self.current_level = 1
		self.lines_cleared = 0
		self.new_piece()  # This sequence is not much programmable.
		self.text_area.insert(tk.END, self.render())
		self.create_menu()
		self.game_over_status = False  # fixed, only reversed at quitting.
		self.deleted_lines = 0  # for scoring
		self.score = tk.StringVar(self.window, "Lines Cleared: 0 | Level: 1")
		# for displaying the score
		self.scoreboard = tk.Label(self.window, textvariable=self.score)
		self.scoreboard.pack()
		self.window.mainloop()

	def calculate_ghost_position(self):
		ghost_cursor = self.cursor
		while not self.board.collision(
			self.piece.matrix, (ghost_cursor[0] + 1, ghost_cursor[1])
		):
			ghost_cursor = (ghost_cursor[0] + 1, ghost_cursor[1])
		return ghost_cursor

	# Each of the methods below are programmable (replaceable) -- but give in the documentation
	# what the game programmer has to provide -- the functionality, role, the entagling of concerns.
	def render(self):
		area = deepcopy(self.board)
		piece = self.piece
		ghost_cursor = self.calculate_ghost_position()

		# Render the ghost piece with a lighter colour
		for row in range(piece.matrix.shape[0]):
			for column in range(piece.matrix.shape[1]):
				if piece.matrix[row][column]:
					# Set a lighter color or a different pattern for the ghost piece
					area.area[row + ghost_cursor[0]][column + ghost_cursor[1]] = "ghost"

		# Render the actual falling piece
		for row in range(piece.matrix.shape[0]):
			for column in range(piece.matrix.shape[1]):
				if piece.matrix[row][column]:
					area.area[row + self.cursor[0]][column + self.cursor[1]] = True

		return str(area)

	def toggle_pause_status(self):
		self.pauseStatus = not (self.pauseStatus)

	def rotate_CW(self, event):
		if self.pauseStatus:
			return
		newpiece = Shape(self.piece.matrix)
		newpiece.rotateCW()
		if self.board.collision(newpiece.matrix, self.cursor):
			return False
		else:
			self.piece = newpiece
			return True

	def rotate_AntiCW(self, event):
		if self.pauseStatus:
			return
		newpiece = Shape(self.piece.matrix)
		newpiece.rotateAntiCW()
		if self.board.collision(newpiece.matrix, self.cursor):
			return False
		else:
			self.piece = newpiece
			return True

	def move_left(self, event):
		if self.pauseStatus:
			return
		self.move_piece("LEFT")

	def move_right(self, event):
		if self.pauseStatus:
			return
		self.move_piece("RIGHT")

	def drop_piece(self, event):
		if self.pauseStatus:
			return
		while self.move_piece("DOWN"):
			pass  # Could be: nothing = "doing" # keep dropping

	def move_down_force(self, event):
		self.move_down_step(True)

	def move_down_step(self, accelerated=False):
		if self.pauseStatus:
			self.window.after(self.move_down_duration, lambda: self.move_down_step())
			return
		if not (self.move_piece("DOWN")):
			self.board.insertShape(self.piece.matrix, self.cursor[0], self.cursor[1])
			tobedeleted = [
				row for row in reversed(range(self.height)) if all(self.board.area[row])
			]
			if tobedeleted:
				self.deleted_lines += len(tobedeleted)
				self.lines_cleared += len(tobedeleted)
				self.score.set(
					f"Lines Cleared: {self.deleted_lines} | Level: {self.current_level}"
				)
				for row in reversed(tobedeleted):
					for newrow in reversed(range(row)):
						for column in range(self.width):
							self.board.area[newrow + 1][column] = self.board.area[
								newrow
							][column]
				for row in range(len(tobedeleted)):
					self.board.area[row] = numpy.full_like(self.board.area[row], False)
				self.check_level_up()
			self.cursor = self.default_cursor
			self.new_piece()
			if self.board.collision(self.piece.matrix, self.cursor):
				string_board = self.render().split("\n")
				string_board[int(self.height / 5)] = "Game Over"
				lastmessage = ""
				for row in range(self.height):
					lastmessage = lastmessage + string_board[row].strip() + "\n"
				self.text_area.delete(1.0, tk.END)
				self.text_area.insert(1.0, lastmessage)
				self.dialog = tk.simpledialog.Dialog(self.window, "Game Over!")
				self.window.quit()
		if not (accelerated):
			self.window.after(self.move_down_duration, lambda: self.move_down_step())

	def check_level_up(self):
		lines_per_level = 1  # Number of lines to clear per level, adjust as needed
		if self.lines_cleared >= lines_per_level * self.current_level:
			if self.current_level < self.max_level:
				self.current_level += 1
				self.speed_up()
				self.score.set(
					f"Lines Cleared: {self.deleted_lines} | Level: {self.current_level}"
				)
				print(f"Level Up! Current Level: {self.current_level}")
			else:
				self.end_game()

	def update_step(self):
		if self.pauseStatus:
			self.window.after(self.update_duration, lambda: self.update_step())
			return
		self.text_area.delete(1.0, tk.END)
		self.text_area.insert(tk.END, self.render())
		self.window.after(self.update_duration, lambda: self.update_step())

	def speed_up(self):  # programmable
		self.move_down_duration = int(numpy.floor(self.move_down_duration * 0.9))

	def slow_down(self):  # programmable
		self.move_down_duration = int(numpy.ceil(self.move_down_duration * 1.1))

	def extetricks_help(self):
		self.pauseStatus = True
		help_message = """
			This is EXtendedTETRIckS, extensible to extetrominoes and more.
			Play it like all other tetris clones.
			Copyright (C) 2024 Ramprasad S. Joshi.
			(CS&IS Dept, BITS, Pilani K K Birla Goa Campus, GOA INDIA.)
			+91 832 2580 121. rsj [at] the bits mail id below.
			goa.bits-pilani.ac.in
			https://www.bits-pilani.ac.in/goa/ramprasad-savlaram-joshi
			Developed as a pedagogical resource for
			Birla Institute of Technology and Science, Pilani.
			"""
		self.text_area.delete(1.0, tk.END)
		self.text_area.insert(tk.END, help_message)
		tk.simpledialog.Dialog(self.window, "Click any button to continue")
		self.pasueStatus = False

	def create_menu(self):
		menu = tk.Menu(self.window)
		self.window.config(menu=menu)

		extetris_menu = tk.Menu(menu)
		menu.add_cascade(label="EXtendedTETRIckS", menu=extetris_menu)
		extetris_menu.add_command(label="New Game", command=self.new_game)
		extetris_menu.add_separator()
		extetris_menu.add_command(label="Pause", command=self.toggle_pause_status)
		extetris_menu.add_separator()
		extetris_menu.add_command(label="Speed-Up", command=self.speed_up)
		extetris_menu.add_command(label="Slow-down", command=self.slow_down)
		extetris_menu.add_separator()
		extetris_menu.add_command(label="Save state", command=self.save_file)
		extetris_menu.add_separator()
		extetris_menu.add_command(label="Exit", command=self.window.quit)
		extetris_menu.add_separator()
		extetris_menu.add_command(label="Quit", command=self.window.quit)
		extetris_menu.add_separator()
		extetris_menu.add_command(label="About", command=self.extetricks_help)

	def new_piece(self, piece=None):
		if piece == None:
			self.piece = Shape(get_any_extetromino(self.extetromino_distribution))
		else:
			self.piece = piece
		self.cursor = self.default_cursor

	def new_game(self):
		if self.game_over_status:
			self.window.quit()
		self.pauseStatus = True
		self.board.area = numpy.full_like(self.board.area, False)
		self.new_piece()
		self.text_area.delete(1.0, tk.END)
		self.text_area.insert(tk.END, self.render())
		self.cursor = self.default_cursor
		self.move_down_duration = self.initial_move_down_duration
		self.deleted_lines = 0
		self.score.set("No. of Lines Cleared = " + str(self.deleted_lines))
		self.pauseStatus = False

	def save_file(self):
		file = filedialog.asksaveasfilename(
			defaultextension=".txt",
			filetypes=[("Text Files", "*.txt"), ("All Files", "*.*")],
		)
		if file:
			with open(file, "w") as file_handler:
				file_handler.write(self.text_area.get(1.0, tk.END))
			self.window.title(f"Python Tetris Board - {file}")

	def move_piece(self, direction):
		if direction == "LEFT":
			offset = (0, -config.left_offset)
		elif direction == "RIGHT":
			offset = (0, config.right_offset)
		elif direction == "DOWN":
			offset = (config.down_offset, 0)

		new_cursor = tuple(map(lambda a, b: a + b, self.cursor, offset))

		# Check if the new position is within the board boundaries
		if not self.is_within_boundaries(new_cursor):
			return False

		if self.board.collision(self.piece.matrix, new_cursor):
			return False
		else:
			self.cursor = new_cursor
			return True

	def is_within_boundaries(self, cursor):
		# Check horizontal boundaries
		x, y = cursor
		if y < 0 or y + self.piece.matrix.shape[1] > self.width:
			return False
		# Check vertical boundaries
		if x < 0 or x + self.piece.matrix.shape[0] > self.height:
			return False
		return True

	def toggle_pause_status(self, event):
		"""Toggle the pause status of the game."""
		self.pauseStatus = not self.pauseStatus
		if self.pauseStatus:
			self.text_area.insert(tk.END, f"\nGame Paused. Press '{config.pause_key}' to continue.")
		else:
			self.text_area.insert(tk.END, "\nGame Resumed.")
			self.update_step()  # Resume game updates


	def end_game(self):
		# Display the end game message
		self.text_area.delete(1.0, tk.END)
		self.text_area.insert(
			tk.END, "You have beaten the game!\nWindow Closing in 5 seconds..."
		)
		self.window.update()
		sleep(5)  # Wait for 5 seconds
		self.window.destroy()  # Close the game window


if __name__ == "__main__":
	print(
		""" extetricks  Copyright (C) 2024  Ramprasad S. Joshi
	This program comes with ABSOLUTELY NO WARRANTY; for details see the about window.
	This is free software, and you are welcome to redistribute it
	under certain conditions listed in GPL3.0"""
	)
	tetris_engine = TetrisEngine()
