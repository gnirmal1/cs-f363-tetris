build:
	bison -d -r all a2version2.y ; flex extetrickscanner.l ;  gcc extetrickstype.c lex.yy.c a2version2.tab.c

tests:
	pip install -r requirements.txt
	bison -d -r all a2version2.y ; flex extetrickscanner.l ;  gcc extetrickstype.c lex.yy.c a2version2.tab.c -o x2021A7PS2606G
	cat ./configs/game_default.py > ./configs/game.py
	./x2021A7PS2606G < input.tetris > ./configs/game_temp.by
	by2py ./configs/game_temp.by
	cat ./configs/game_temp.py >> ./configs/game.py
	python3 ./engine/engine.py

test_no_bython:
	pip install -r requirements.txt
	bison -d -r all a2version2.y ; flex extetrickscanner.l ;  gcc extetrickstype.c lex.yy.c a2version2.tab.c -o x2021A7PS2606G
	cat ./configs/game_default.py > ./configs/game.py
	./x2021A7PS2606G < input.tetris > ./configs/game_temp.py
	cat ./configs/game_temp.py >> ./configs/game.py
	python3 ./engine/engine.py
