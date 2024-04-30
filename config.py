extetromino_distribution = range(1, 2)
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
levels_dict["level1"] = {"points_per_line": 10, "points_to_beat": 30, "speed_percentage_change": 10}
difficulty = "easy"
pause_key = "p"