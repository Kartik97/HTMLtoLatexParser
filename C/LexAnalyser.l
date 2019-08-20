%{
#include<stdio.h>
#include<string.h>
#include "y.tab.h"
%}

space [ \t\r\n]
html "html"|"HTML"
head "head"|"HEAD"
title "title"|"TITLE"
doctype "!doctype"|"!DOCTYPE"

%%
"<"{doctype}{space}+[^{html}]*{html}">"|"<"{doctype}{space}+[^{html}]*{html}{space}+[^>]*">" {
	yylval.value = "DOCTYPE";
	return DOCTYPE;
}
"<"{html}{space}+[^>]*">"|"<"{html}">"  {
	yylval.value="HTMLOP";
	return HTMLOP;
}
"</"{html}{space}+[^>]*">"|"</"{html}">"  {
	yylval.value="HTMLCL";
	return HTMLCL;
}
"<"{head}{space}+[^>]*">"|"<"{head}">"  {
        yylval.value="HEADOP";
        return HEADOP;
}
"</"{head}{space}+[^>]*">"|"</"{head}">"  {
        yylval.value="HEADCL";
        return HEADCL;
}
"<"{title}{space}+[^>]*">"|"<"{title}">"  {
        yylval.value="TITLEOP";
        return TITLEOP;
}
"</"{title}{space}+[^>]*">"|"</"{title}">"  {
        yylval.value="TITLECL";
        return TITLECL;
}

[.\n] {}
%%

int yywrap(){
	return 1;
}
