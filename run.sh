#!/bin/bash

if [ $# -ne 2 ]; then
    echo "Enter two file names"
    exit 1
fi

flex LexAnalyser.l
bison -d -v Parser.y
g++ convert.cpp ast.cpp lex.yy.c Parser.tab.c
./a.out $1 $2 
