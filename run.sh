#!/bin/bash

flex LexAnalyser.l
bison -dv Parser.y
g++ lex.yy.c Parser.tab.c
./a.out input.html
