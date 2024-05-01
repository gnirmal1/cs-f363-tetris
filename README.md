# EXtendedTETRIckS - A Customizable Tetris Game

**EXtendedTETRIckS** is a highly customizable Tetris game implemented in Python. It allows users to tailor the game experience according to their preferences by modifying various game parameters through an input configuration file. This README provides an overview of the customization features and details the input format for the configuration file.

## Running the Code
Run **make test_no_bython** if the input code does not contain any functions/loops/if statements. Otherwise run **make tests**. If the input defines uses loops/if statements or defines custom functions the compilation process requires the presence of bython library.

## Customization Features

- **Game Title**: Customize the title displayed in the game window.
- **Theme**: Choose from a variety of predefined themes or create your own by specifying the background color, foreground color, and font.
- **Board Size**: Adjust the height and width of the game board to suit your preferences.
- **Starting Cursor Position**: Set the initial position where the falling pieces will appear.
- **Key Bindings**: Remap the keys used for moving the falling pieces left, right, down, rotating clockwise, pausing/resuming the game, and quitting the game.
- **Movement Offsets**: Customize the number of cells the falling piece moves in each direction.
- **Difficulty Levels**: Define multiple difficulty levels by specifying the score required to advance to the next level, the speed increase percentage, and the extetromino distribution range.
- **Custom Extetromino Range**: Choose the range of extetromino shapes to be included in the game, allowing for different levels of complexity.
- **Pause Key**: Assign a key to pause and resume the game.
- **Quit Key**: Set a key to quit the game gracefully.
- **End Game Message**: Customize the message displayed when the player reaches the maximum level and beats the game.

## Extetromino Distribution

One of the unique features of **EXtendedTETRIckS** is the ability to include extetromino shapes, which are geometric shapes composed of multiple conjoined tetromino blocks. The game allows you to specify the range of extetromino shapes to be included, providing an additional layer of complexity and challenge.

## Input Format

The game configuration is defined in an input file named `input.tetris`. The file should follow a specific format to ensure proper parsing and game customization. Here's an example of the input format:

```plaintext
Section1
title = "My Custom Tetris" # Sets the title of the game window
height = 15 # Sets the height of the game board
theme = "hecker" # sets the theme(background colour, foreground colour, font) Choose from the list of theme's provided in themes.py
width = 10 # Sets the width of the game board
default_cursor = (2, 5) # Sets the initial position of the falling piece (row, column)
left_key = "a" # Sets the key for moving the piece left
right_key = "d" # Sets the key for moving the piece right
down_key = "s" # Sets the key for moving the piece down
up_key = "w" # Sets the key for rotating the piece clockwise
left_offset = 2 # Sets the number of cells the piece moves to the left
right_offset = 2 # Sets the number of cells the piece moves to the right
down_offset = 2 # Sets the number of cells the piece moves down
custom_range = (1, 10) # Sets the range of extetromino shapes to include (start, end)
quit_key = "q" # Sets the key for quitting the game
end_game_message = "Congratulations! You've mastered the game!" # Sets the message displayed when the game is beaten
level1 = (10, 1, 5) # Sets the parameters for level 1 (score_to_advance, level_number, speed_increase_percentage)
level2 = (20, 2, 10) # Sets the parameters for level 2
level3 = (30, 3, 15) # Sets the parameters for level 3
difficulty = "medium" # Sets the difficulty level (easy, medium, hard, or custom)
pause_key = "p" # Sets the key for pausing/resuming the game
max_level = 3 # Sets the maximum level in the game
Section2 # This section is for functions

Section3 # This section is for future extensions

```
After the sections ensure the presence of a newline. Each parameter is specified on a new line, followed by an equal sign (=) and the desired value. The input file is divided into three sections: Section1, Section2, and Section3. Section1 contains the primary game configuration parameters, while Section 2 is used for function definitions and Section 3 is reserved for future extensions. Function definitions require the use of bython in the compilation process, so install it before running make tests. 

_Declaration_

_This work was a collaboration between Nirmal Govindaraj (2021A7PS0441G), Yash Bhisikar (2021A7PS0483G), Siddhant Kulkarni (2021A7PS2606G), Valeti Kumarakrishna (2021A7PS2617G), Jahnavi Rishikesh (2021A7PS1474G), Joel Tony (2021A7PS2077G), Arnav Guta (2021A7PS2092G), and Avaneesh Gujran (2021A7PS0010G) as part of CS F363 - Compiler Construction._
