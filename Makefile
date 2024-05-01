build:
	bison -d -r all a2version2.y ; flex extetrickscanner.l ;  gcc extetrickstype.c lex.yy.c a2version2.tab.c

test:
	pip install -r requirements.txt
	bison -d -r all a2version2.y ; flex extetrickscanner.l ;  gcc extetrickstype.c lex.yy.c a2version2.tab.c -o x2021A7PSXXXXG
	cat game_default.py > game.py
	./x2021A7PSXXXXG < input.tetris > game_temp.by
	by2py game_temp.by
	cat game_temp.py >> game.py
	python3 engine.py

test_no_bython:
	pip install -r requirements.txt
	bison -d -r all a2version2.y ; flex extetrickscanner.l ;  gcc extetrickstype.c lex.yy.c a2version2.tab.c -o x2021A7PSXXXXG
	cat game_default.py > game.py
	./x2021A7PSXXXXG < input.tetris > game_temp.py
	cat game_temp.py >> game.py
	python3 engine.py
	