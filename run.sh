#!/bin/bash

flex ast.l
bison -d -v ast.y
g++ lex.yy.c ast.tab.c ast.cpp
./a.out input.html
