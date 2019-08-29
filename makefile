compiler: ast.cpp lex.yy.c ast.tab.c
	@g++ ast.cpp lex.yy.c ast.tab.c -o compiler
ast.tab.c ast.tab.h: ast.cpp ast.y
	@bison -dv ast.y
lex.yy.c: ast.l ast.tab.h
	@flex ast.l
