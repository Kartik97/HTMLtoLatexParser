%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
%}
%option stack

space [ \t\r]

%%
"<html>"        {  
			return HTML;
		}
"<html"[ \t\r][^>]*">" { 
			return HTML;
		}
.
	
%%
int yywrap(){
	return 1;
}
