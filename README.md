Collaboration disclosure: Nirmal Govindaraj (2021A7PS04441G), Yash Bhisikar (2021A7PS0483G), Valeti Kumarakrishna (2021A7PS2617G) and Siddhant Kulkarni (2021A7PS2606G) have collaborated on this project.

Converts the given syntax to bython (bracketed python) which can then be converted to python code using by2py script.

[Bython](https://github.com/mathialo/bython/tree/master) contains instructions on how to install and use. Use by2py script to get equivalent python code

compile lex and yacc code using `bison -d -r all a2version2.y ; flex extetrickscanner.l ;  gcc extetrickstype.c lex.yy.c a2version2.tab.c`

test code by running `./a.out < testinput.tetris > temp.by`

once bython is installed run `by2py temp.by` to get python converted code

## Config Options

## Extetromino Distribution

The `extetromino_distribution` option in `config.py` determines the range of extetrominoes (generalized tetrominoes) that can appear in the game. By default, it is set to `range(1, 2)`, which means only the classic tetrominoes (I, O, T, J, L, S, Z) will be included.

However, you can explore a wider range of extetrominoes by adjusting this option. For example, setting `extetromino_distribution = range(1, 8)` will include all one-sided extetrominoes, while `extetromino_distribution = range(1, 74)` will include all free extetrominoes, offering a significantly more challenging gameplay experience.

## Appearance Customization

EXtendedTETRIckS allows you to customize the game's appearance by modifying the following options:

- `title`: This option sets the title of the game window.
- `bg`: This option determines the background color of the game area.
- `fg`: This option sets the foreground color, which is the color of the falling pieces.
- `font`: This option specifies the font used for displaying the game area. It is represented as a tuple containing the font family, size, and style (e.g., `("Courier New", "16", "bold")`).

## Board Size

The size of the game board can be adjusted by changing the `height` and `width` options in `config.py`. These options control the number of rows and columns in the game area, respectively.

## Controls

EXtendedTETRIckS supports customizable keyboard controls for moving and rotating the falling pieces. You can modify the following options to change the key bindings:

- `left_key`, `right_key`, `down_key`, `up_key`: These options set the keys used for moving the piece left, right, down, and rotating clockwise, respectively.
- `left_offset`, `right_offset`, `down_offset`: These options determine the number of cells the piece moves in the respective direction when the corresponding key is pressed.

## Difficulty and Levels

The difficulty of the game can be set by modifying the `difficulty` option in `config.py`. Three difficulty levels are available: "easy", "medium", and "hard". Each difficulty level determines the range of extetrominoes that can appear in the game, with higher difficulties including more complex shapes.

The game also features multiple levels, each with increasing speed and scoring. The maximum level can be set with the `max_level` option in `config.py`. The scoring and speed increase for each level are defined in the `levels_dict` dictionary, where you can adjust the following parameters:

- `points_per_line`: The number of points awarded for clearing a single line.
- `lines_to_beat`: The number of lines that need to be cleared to advance to the next level.
- `speed_percentage_change`: The percentage by which the falling speed increases when advancing to the next level.

## Pause Key

The key used to pause and resume the game can be changed by modifying the `pause_key` option in `config.py`.

## Initial Piece Position

The initial position where new pieces appear can be adjusted by changing the `default_cursor` option in `config.py`. This option is represented as a tuple containing the row and column indices.

## Game Over Message

The message displayed when the game is over can be customized by modifying the `end_game_message` option in `config.py`.
