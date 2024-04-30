[compile lex and yacc code using] bison -d -r all a2version2.y ; flex extetrickscanner.l ; gcc extetrickstype.c lex.yy.c a2version2.tab.c

[test code by running] ./a.out < testinput.tetris > temp.by

[once Bython is installed,] run by2py temp.by [to get Python converted code]

# Python Text Tetris Configuration Options

This README provides an overview of the configuration options available for the Python Text Tetris game. By modifying these options, you can customize various aspects of the game to suit your preferences.

## Game Appearance

- `title`: Sets the title of the game window.
- `bg`: Specifies the background color of the game. Default is "light gray".
- `fg`: Specifies the foreground color (text color) of the game. Default is "blue".
- `font`: Defines the font style, size, and weight for the game text. Default is ("Courier New", "16", "bold").
- `theme`: Defines the themes available. Options are dark, light, default and hackermode 

## Board Dimensions

- `height`: Sets the height of the game board in number of rows. Default is 10.
- `width`: Sets the width of the game board in number of columns. Default is 20.

## Initial Cursor Position

- `default_cursor`: Specifies the initial position of the cursor (falling piece) on the game board. It is a tuple in the format (row, column). Default is (0, int(width / 2 - 1)), which places the cursor at the top center of the board.

## Keyboard Controls

- `left_key`: Specifies the key used to move the falling piece to the left. Default is "Left".
- `right_key`: Specifies the key used to move the falling piece to the right. Default is "Right".
- `down_key`: Specifies the key used to move the falling piece downwards. Default is "Down".
- `up_key`: Specifies the key used to rotate the falling piece. Default is "Up".
- `left_offset`: Sets the number of columns the piece moves to the left with each key press. Default is 1.
- `right_offset`: Sets the number of columns the piece moves to the right with each key press. Default is 1.
- `down_offset`: Sets the number of rows the piece moves downwards with each key press. Default is 1.


## Levels and Difficulty

- `levels_dict`: A dictionary that defines the properties for each level of the game. Each level is represented by a key (e.g., "level1", "level2", etc.), and the corresponding values are dictionaries containing the following properties:
  - `points_per_line`: The number of points awarded for clearing a single line in that level.
  - `lines_to_beat`: The number of lines the player needs to clear to advance to the next level.
  - `speed_percentage_change`: The percentage by which the falling speed of the pieces increases in that level.
- `difficulty`: Sets the overall difficulty of the game. Default is "easy". Other possible values could be "medium", "hard" or "custom". Define the `custom_range` when using "custom" difficulty. 

## Game Control Flow

- `pause_key`: Specifies the key used to pause and resume the game. Default is "p".
- 'quit_key` : Quit the game. Defauly is "q"
- `end_game_message`: Specifies the message displayed when the player beats the game. Default is "You Have beaten the game!".
  

## Maximum Level

- `max_level`: Sets the maximum level that the player can reach in the game. Default is 3.

By modifying these configuration options, you can customize the Python Text Tetris game according to your preferences, such as changing the appearance, controls, difficulty, and gameplay mechanics.