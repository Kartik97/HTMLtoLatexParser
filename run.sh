#!/bin/bash

flex LexAnalyser.l
bison -d -v Parser.y
g++ lex.yy.c Parser.tab.c ast.cpp
./a.out input.html
