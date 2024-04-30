Converts the given syntax to bython (bracketed python) which can then be converted to python code using by2py script.

[Bython](https://github.com/mathialo/bython/tree/master) contains instructions on how to install and use. Use by2py script to get equivalent python code

compile lex and yacc code using `bison -d -r all a2version2.y ; flex extetrickscanner.l ;  gcc extetrickstype.c lex.yy.c a2version2.tab.c`

test code by running `./a.out < testinput.tetris > temp.by`

once bython is installed run `by2py temp.by` to get python converted code