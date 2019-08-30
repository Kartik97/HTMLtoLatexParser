#!/bin/bash

flex LexAnalyser.l
bison -d -v Parser.y
g++ convert.cpp ast.cpp lex.yy.c Parser.tab.c
./a.out input.html
