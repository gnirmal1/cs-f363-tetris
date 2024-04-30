build: 
	bison -d -r all a2version2.y ; flex extetrickscanner.l ;  gcc extetrickstype.c lex.yy.c a2version2.tab.c

test:
	./a.out < testinput.tetris 2>/dev/null > output.py
