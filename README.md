# EXtendedTETRIckS - Customizable Tetris Game

**EXtendedTETRIckS** is a highly customizable Tetris game implemented in Python. This README outlines its extensive customization options and explains the format for its configuration file.

## Running the Code

Use the provided Makefile to run the game:

- Since the code has Python dependencies, it is advisable to work inside a virtual environment for Python and install the required packages using the `requirements.txt` file.

```bash
python3 -m venv .venv # Create a virtual envirnment named `venv`
source .venv/bin/activate # Activate the virtual environment
```

- Run `make test_no_bython` for basic tests if the code doesn't contain complex elements like loops, if statements, or custom functions.
- Run `make tests` for comprehensive tests. This requires the [bython](https://github.com/mathialo/bython) library.

### Disclaimer

Note that this code was tested in an Arch Linux environment, with Python 3.12.3 and the latest version of the `tk` package (v8.6.14-2)installed.

```bash
sudo pacman -S tk
```

## Customization Features

### Game Title

Customize the game window's title with the `title` parameter in the configuration file.

### Theme

**EXtendedTETRIckS** provides predefined themes, or you can create a custom theme by setting the `bg` (background color) and `fg` (foreground color). Use the `theme` parameter to select a predefined theme or set it to "custom" for a unique color scheme.

### Board Size

Modify the `height` and `width` parameters to adjust the game board's size.

### Starting Cursor Position

The `default_cursor` parameter sets the initial position (row and column) for falling pieces on the game board.

### Key Bindings

Customize key bindings for game actions, like moving pieces left (`left_key`), right (`right_key`), down (`down_key`), rotating (`up_key`), pausing (`pause_key`), and quitting (`quit_key`).

### Movement Offsets

Control how far pieces move with the `left_offset`, `right_offset`, and `down_offset` parameters.

### Levels and Speedup

Define scoring and speed increases to progress through levels with the following parameters:

- `score_to_advance`: Score needed to advance to the next level.
- `level_number`: Level identifier.
- `speed_increase_percentage`: Percentage increase in falling speed for this level.

Example: `level2 = (20, 2, 50)` sets level 2's score requirement to 20, with a 50% speed increase.

### Maximum Level

Set the maximum level using the `max_level` parameter.

### Difficulty

Select between `easy`, `medium`, `hard`, or `custom`. `custom` lets you specify a range of shapes with `custom_range`.

### Custom Extetromino Range

The `custom_range` parameter specifies a range of extetromino shapes (start and end values) for a custom difficulty setting.

### Frequency Distribution

Choose uniform, Gaussian, or exponential distributions for tetromino shapes with the `freq_dist` parameter.

### Rotate Limit

The `rotate_counter_limit` parameter sets a limit on how many times you can rotate each piece. Set to -1 for infinite rotations.

### End Game Message

Customize the message displayed when the player beats the game with the `end_game_message` parameter.

## Salient Display Features

### Shadow

The game shows a shadow indicating where the falling pieces will land.

### Next Piece

The game displays the current level, lines cleared, and the next piece to follow, below the game board.

## Input Format

Game configuration is defined in an `input.tetris` file with three sections: Section1 for the main configuration, Section2 for function definitions, and Section3 for future extensions.

Parameters are specified on new lines, with `=`, followed by the desired value. Strings should use double quotes (""). Ensure there's a newline after each section.

Here is an example of the input format:

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

### NOTE

Following the input format is crucial for avoiding errors. Default values are used if required inputs are missing.

_Declaration_

_This work was a collaboration between Nirmal Govindaraj (2021A7PS0441G), Yash Bhisikar (2021A7PS0483G), Siddhant Kulkarni (2021A7PS2606G), Valeti Kumarakrishna (2021A7PS2617G), Jahnavi Rishikesh (2021A7PS1474G), Joel Tony (2021A7PS2077G), Arnav Gupta (2021A7PS2092G), and Avaneesh Gujran (2021A7PS0010G) as part of CS F363 - Compiler Construction._

## Disclaimer

Note that the code was tested in an Arch Linux environment, with Python 3.12.3 and the `tk` package installed.

```bash
# To install the tk package
sudo pacman -S tk
```
