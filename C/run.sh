#!/bin/bash

flex LexAnalyser.l
yacc -d Parser.y
gcc lex.yy.c y.tab.c -w
./a.out input.html
