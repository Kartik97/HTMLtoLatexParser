#!/bin/bash

flex LexAnalyser.l
bison -d -v Parser.y
g++ lex.yy.c Parser.tab.c
./a.out input.html
