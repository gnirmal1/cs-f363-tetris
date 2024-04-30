title = "Python Text Tetris"
bg = "light gray"
fg = "blue"
font = ("Courier New", "16", "bold")
height = 10
width = 20
default_cursor = (0, int(width / 2 - 1))
left_key = "Left"
right_key = "Right"
down_key = "Down"
up_key = "Up"
left_offset = 1
right_offset = 1
down_offset = 1
end_game_message = "You Have beaten the game!"
levels_dict = {}
levels_dict["level3"]=(30, 3, 50)
levels_dict["level2"]=(20, 2, 50)
levels_dict["level1"]=(10, 1, 50)
difficulty = "custom"
custom_range = range(1, 2)
pause_key = "p"
max_level = 3
quit_key = "q"
theme = "hackermode"