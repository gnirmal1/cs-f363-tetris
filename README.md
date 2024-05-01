# EXtendedTETRIckS - A Highly Customizable Tetris Game

**EXtendedTETRIckS** is a Tetris game implemented in Python that offers a wide range of customization options, allowing users to tailor the game experience to their preferences. This README provides a detailed overview of the customizable features and explains the input format for the configuration file.

## Running the Code
To run the code, use the provided Makefile:

- Run `make test_no_bython` if the input code does not contain any functions, loops, or if statements.
- Run `make tests` if the input defines uses loops, if statements, or custom functions. Note that this requires the presence of the [bython](https://github.com/mathialo/bython) library.

## Customization Features

### Game Title
You can customize the title displayed in the game window by modifying the `title` parameter in the input file.

### Theme
**EXtendedTETRIckS** offers a variety of predefined themes to choose from, each with its own unique combination of background color, foreground color, and font. Alternatively, you can create your own custom theme by specifying the `bg` (background color) and `fg` (foreground color) parameters. The `theme` parameter allows you to select a predefined theme or set it to "custom" to use your specified colors.

### Board Size
Adjust the dimensions of the game board by modifying the `height` and `width` parameters, allowing you to create a board size that suits your preferences.

### Starting Cursor Position
The `default_cursor` parameter lets you set the initial position (row and column) where the falling pieces will appear on the game board.

### Key Bindings
Customize the key bindings for various game actions, such as moving the falling piece left (`left_key`), right (`right_key`), down (`down_key`), rotating clockwise (`up_key`), pausing/resuming the game (`pause_key`), and quitting the game (`quit_key`).

### Movement Offsets
Control the number of cells the falling piece moves in each direction by setting the `left_offset`, `right_offset`, and `down_offset` parameters.

### Levels and Speedup
Define the score to advance through levels and the speedup by specifying the following parameters for each level:
- `score_to_advance`: The score required to advance to the next level.
- `level_number`: The level number.
- `speed_increase_percentage`: The percentage by which the falling speed increases at this level.

For example, `level1 = (10, 1, 5)` sets the parameters for level 1, where the player needs to score 10 points to advance to the next level, and the falling speed increases by 5% at this level.

### Maximum Level
Set the maximum level in the game using the `max_level` parameter.

### Difficulty
Allows you to choose between `easy ` `medium` and `hard`. With increasing difficulty the tetrominoe shapes increase increasing the difficulty. You can also set it to `custom` and specify the range of shapes you want to use through `custom_range`.

### Custom Extetromino Range
The `custom_range` parameter allows you to choose the range of extetromino shapes (start and end values) to be included in the game, providing different levels of complexity. Extetrominos are geometric shapes composed of multiple conjoined tetromino blocks.

### Frequency Distribution
The `freq_dist` parameter lets you choose from uniform, gaussian, and exponential distributions for the occurrences of the selected extetromino shapes specified through the difficulty or custom range.

### Rotate Limit
The `rotate_counter_limit` parameter sets a limit on the number of rotations that can be performed on a single piece. Set to -1 to allow infinite rotations.

### End Game Message
Customize the message displayed when the player reaches the maximum level and beats the game by modifying the `end_game_message` parameter.

## Salient Display Features
### Shadow
  The game displays a shadow for the falling pieces to show where they would end up on the current trajectory.
### Next Piece
  Below the game board, the current level, the lines cleared (score), and the next piece to follow are displayed.

## Input Format
The game configuration is defined in an input file named `input.tetris`. The file should follow a specific format to ensure proper parsing and game customization. The input file is divided into three sections: Section1, Section2, and Section3. Section1 contains the primary game configuration parameters, while Section2 is used for function definitions, and Section3 is reserved for future extensions.

Each parameter is specified on a new line, followed by an equal sign (=) and the desired value. For string values, make sure to use double quotes (""). After the sections, ensure the presence of a newline.

The input format allows you to customize various aspects of the game, including the game title, theme, board size, cursor position, key bindings, movement offsets, difficulty levels, extetromino range, frequency distribution, rotate limit, end game message, and more.

Here's an example of the input format:

```plaintext
Section1
title = "My Custom Tetris" # Sets the title of the game window
height = 15 # Sets the height of the game board
theme = "hecker" # sets the theme(background colour, foreground colour, font)
  Choose from the list of theme's provided in themes.py or choose to set a custom theme and specify bg and fg
bg = "black" # if theme is set to custom colour specified for bg is used as background colour
fg = "blue" # if theme is set to custom colour specified for fg is used as foreground colour
width = 10 # Sets the width of the game board
freq_dist = "uniform" # Sets the frequencies for the tetrominoe shapes selected based on difficulty/custom range
rotate_counter_limit = 5 # Sets the maximum rotations for each piece. Set to -1 to allow infinite rotations. 
default_cursor = (2, 5) # Sets the initial position of the falling piece (row, column)
left_key = "a" # Sets the key for moving the piece left
right_key = "d" # Sets the key for moving the piece right
down_key = "s" # Sets the key for moving the piece down
up_key = "w" # Sets the key for rotating the piece clockwise
left_offset = 2 # Sets the number of cells the piece moves to the left
right_offset = 2 # Sets the number of cells the piece moves to the right
down_offset = 2 # Sets the number of cells the piece moves down
custom_range = (1, 10) # Sets the range of extetromino shapes to include (start, end). Only used if diffoculty is set to custom
quit_key = "q" # Sets the key for quitting the game
end_game_message = "Congratulations! You've mastered the game!" # Sets the message displayed when the game is beaten
level1 = (10, 1, 5) # Sets the parameters for level 1 (score_to_advance, level_number, speed_increase_percentage)
level2 = (20, 2, 10) # Sets the parameters for level 2
level3 = (30, 3, 15) # Sets the parameters for level 3
difficulty = "medium" # Sets the difficulty level (easy, medium, hard, or custom).
    With increasing difficulty more shapes occur. In Custom difficulty custom range is used to select tetrominoe shapes.
pause_key = "p" # Sets the key for pausing/resuming the game
max_level = 3 # Sets the maximum level in the game
Section2 # This section is for functions

Section3 # This section is for future extensions

```

_Declaration_

_This work was a collaboration between Nirmal Govindaraj (2021A7PS0441G), Yash Bhisikar (2021A7PS0483G), Siddhant Kulkarni (2021A7PS2606G), Valeti Kumarakrishna (2021A7PS2617G), Jahnavi Rishikesh (2021A7PS1474G), Joel Tony (2021A7PS2077G), Arnav Guta (2021A7PS2092G), and Avaneesh Gujran (2021A7PS0010G) as part of CS F363 - Compiler Construction._
