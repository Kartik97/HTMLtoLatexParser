%{
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include "ast.h"

using namespace std;

#define copy(v1,v2) copy(v2.begin(),v2.end(),back_inserter(v1))
#define pb(x) push_back(x)

int i=0;
extern int yylex();
extern void yyerror(const char*);
char* concat(char *s1,char *s2);
typedef vector<treeNode*> vn;

void update(vn* v);

%}

// %name parse
%union{
	node* object;
	char* value;
}

%start st
%token <value> DOCTYPE
%token <value> HTMLOP
%token <value> HTMLCL
%token <value>  HEADOP
%token <value> HEADCL
%token <value> TITLEOP
%token <value> TITLECL
%token <value> BODYOP
%token <value> BODYCL
%token <value> BPHRASEOP
%token <value> BPHRASECL
%token <value> PHRASEOP
%token <value> PHRASECL
%token <value> GTPHOP
%token <value> GTPHCL
%token <value> TEXT
%token <value> AOPOP AOP ACL
%token <value> ATTRIBUTE
%token <value> ATTRIBUTEVAL
%token <value> DIVOP DIVCL
%token <value> IMGOP IMGCL
%token <value> FONTOP FONTOOP FONTCL
%token <value> LOP LCL LIOP LICL
%token <value> FIGOP FIGCL FIGCAPOP FIGCAPCL
%token <value> DLOP DLCL DTOP DTCL DDOP DDCL
%token <value> TABOP TABCL CAPOP CAPCL TROP TRCL THOP THCL TDOP TDCL BR
%token <value> COMMENT SPCHAR SYMBOL CENTEROP CENTERCL
%type <object> head title body flow phraseopen phrases listitem list misc consume gtph phr div dl dt dd table caption tr th td
%type <object> figcap atag miscph consumeph atagph font fontph img figure

%%

st:	DOCTYPE { 
			} 
	| DOCTYPE HTMLOP HTMLCL {
			}
	| HTMLOP HTMLCL {
			}
	| DOCTYPE HTMLOP head HTMLCL {
			}
	| HTMLOP head HTMLCL {
			}
	| DOCTYPE HTMLOP head body HTMLCL {
			}
	| HTMLOP head body HTMLCL {
			}
	| DOCTYPE HTMLOP body HTMLCL {
			}
	| HTMLOP body HTMLCL {
			}
	;

head: HEADOP title HEADCL { 
			} 
	| HEADOP HEADCL { 
			}
	;

title:	TITLEOP TITLECL {
			}
	| TITLEOP consume TITLECL  {
			}
	;

body: BODYOP flow BODYCL  {
				treeNode* ptr = add_node("BODY");
				add_children(ptr,$2->v);
				print(ptr);
			}
	| BODYOP BODYCL {
			}
	;

misc: COMMENT { vn v;
				v.push_back(add_node("COMMENT",$1));
				node* n = new node;
				copy(n->v,v);
				$$=n;
			}
	| BR 	{  	vn v;
				v.push_back(add_node("BR"));
				node* n = new node;
				copy(n->v,v);
				$$=n;
			}
	| TEXT  { 	vn v;
				v.push_back(add_node("TEXT",$1));
				node* n = new node;
				copy(n->v,v);
				$$=n;
			}
	| IMGOP img {
			$$=$2;
		}
	| SYMBOL { 
				vn v;
				v.push_back(add_node("SYMBOL",$1));
				node* n = new node;
				copy(n->v,v);
				$$=n;
			}
	;

consume: consume misc {  vn v1,v2;
			v1 = $1->v;
			v2 = $2->v;
			copy(v1,v2);
		//	update(&v1);
			node* n = new node;
			copy(n->v,v1);
			$$=n;
		}
	| misc {
			$$=$1;
		}
	;

miscph: misc {
			$$=$1;
		}
	| AOP atagph {
		}
	| FONTOP fontph {
		}
	| CENTEROP centerph {
		}
	;
	
consumeph: consumeph miscph { vn v1,v2;
			v1 = $1->v;
			v2 = $2->v;
			copy(v1,v2);
		//	update(&v1);
			node* n = new node;
			copy(n->v,v1);
			$$=n;
		}
	| miscph {
			$$=$1;
		}
	;

flow: BPHRASEOP phraseopen { $$=$2; }
	| GTPHOP gtph {  $$=$2; }
	| LOP list {  $$=$2; }
	| misc flow {
			vn v1,v2;
			v1 = $1->v;
			v2 = $2->v;
			copy(v1,v2);
		//	update(&v1);
			node* n = new node;
			copy(n->v,v1);
			$$=n;
		}
	| misc {
			$$=$1;
		}
	| DIVOP div { 
			$$=$2;
		}
	| DLOP dl {
			$$=$2;
		}
	| TABOP table {
		}
	| FIGOP figure {
		}
	| AOP atag { 
		}
	| FONTOP font { 
		}
	| CENTEROP center { 
		}
	;

center: flow CENTERCL { 
		}
	| flow CENTERCL flow { 
		}
	| CENTERCL {
		}
	| CENTERCL flow { 
		}
	;

phraseopen: phrases BPHRASECL flow { 
			$$=add_child_neighbour($1,$2,$3);
		}
	| BPHRASECL flow {
			$$=add_neighbour($1,$2);
		}
	| BPHRASECL { 
			$$=add_start($1);	
		}
	| phrases BPHRASECL {
			$$=add_startChild($1,$2);
		}
	| consumeph BPHRASECL flow {
			$$=add_child_neighbour($1,$2,$3);
		}
	| consumeph BPHRASECL { 
			$$=add_startChild($1,$2);
		}
	;

phrases: PHRASEOP phr { 
			$$=$2;
		}
	| consumeph PHRASEOP phr {
			node* n=new node;
			copy(n->v,$1->v);
			copy(n->v,$3->v);
			$$=n;
		}
	;

phr: PHRASECL {
			$$=add_start($1);
		}
	| phrases PHRASECL {
			$$=add_startChild($1,$2);
		}
	| PHRASECL phrases {
			$$=add_neighbour($1,$2);
		}
	| PHRASECL consumeph {
			$$=add_neighbour($1,$2);
		}
	| consumeph PHRASECL {
			$$=add_startChild($1,$2);
		}
	| consumeph PHRASECL phrases {
			$$=add_child_neighbour($1,$2,$3);
		}
	| consumeph PHRASECL consumeph {
			$$=add_child_neighbour($1,$2,$3);
		}
	;

fontph: ATTRIBUTE ATTRIBUTEVAL FONTOOP FONTCL { 
		}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP phrases FONTCL { 
		}
	| FONTOOP phrases FONTCL { 
		}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP consumeph FONTCL { 
		}
	| FONTOOP consumeph FONTCL { 
		}
	;

atagph: ATTRIBUTE ATTRIBUTEVAL AOPOP phrases ACL { 
		}
    | AOPOP phrases ACL { 
    	}
    | ATTRIBUTE ATTRIBUTEVAL AOPOP BPHRASEOP phraseopen ACL { 
		}
    | AOPOP BPHRASEOP phraseopen ACL { 
    	}
    | ATTRIBUTE ATTRIBUTEVAL AOPOP consumeph ACL { 
    	}
    | AOPOP consumeph ACL { 
    	}
    | AOPOP ACL {
    	}
	| ATTRIBUTE ATTRIBUTEVAL AOPOP ACL { 	
		}
	;

gtph: phrases GTPHCL flow { 
			$$=add_child_neighbour($1,$2,$3);
		}
	| phrases GTPHCL { 
			$$=add_startChild($1,$2);
		}
	| GTPHCL flow { 
			$$=add_neighbour($1,$2);
		}
	| GTPHCL {
			$$=add_start($1);
		}
	| consumeph GTPHCL { 
			$$=add_startChild($1,$2);
		}
	| consumeph GTPHCL flow { 
			$$=add_child_neighbour($1,$2,$3);
		}
	| BPHRASEOP phraseopen GTPHCL flow { 
			$$=add_child_neighbour($2,$3,$4);
		}
	| BPHRASEOP phraseopen GTPHCL { 
			$$=add_startChild($2,$3);
		}
	| consumeph BPHRASEOP phraseopen GTPHCL flow { 
			$$=add_child_neighbour($1,$3,$4,$5);
		}	
	| consumeph BPHRASEOP phraseopen GTPHCL { 
			$$=add_startChild($1,$3,$4);
		}
	;

centerph: phrases CENTERCL { 
		}
	| consumeph CENTERCL { 
		}
	| CENTERCL {
		}
	| BPHRASEOP phraseopen CENTERCL {
		}
	| consumeph BPHRASEOP phraseopen CENTERCL {
		}
	;

list: LIOP listitem list {
			$3->v[0]->children.insert($3->v[0]->children.begin(),$2->v.begin(),$2->v.end());
			$$=$3;
		}
	| LCL {
			$$=add_start($1);
		}
	| consume LIOP listitem list {
			$4->v[0]->children.insert($4->v[0]->children.begin(),$3->v.begin(),$3->v.end());
			$4->v[0]->children.insert($4->v[0]->children.begin(),$1->v.begin(),$1->v.end());
			$$=$4;
		}
	| consume LCL {
			$$=add_startChild($1,$2);
		}
	| LCL flow {
			$$=add_neighbour($1,$2);
		}
	| consume LCL flow {
			$$=add_child_neighbour($1,$2,$3);
		}
	;

listitem: flow LICL {
			$$=add_startChild($1,$2);
		}
	| LICL {
			$$=add_start($1);
		}
	;

div: DIVCL {
		$$=add_start($1);
		}
	| DIVCL flow {
		$$=add_neighbour($1,$2);
		}
	| flow DIVCL flow {
		$$=add_child_neighbour($1,$2,$3);
		}
	| flow DIVCL {
		$$=add_startChild($1,$2);
		}
	;

dl: DLCL {
			$$=add_start($1);
		}
	| consume DLCL {
			$$=add_startChild($1,$2);
		}
	| DIVOP div DLCL {
			$$=add_startChild($2,$3);
		}
	| consume DIVOP div DLCL {
			$$=add_startChild($1,$3,$4);
		}
	| DLCL flow {
			$$=add_neighbour($1,$2);
		}
	| consume DLCL flow {
			$$=add_child_neighbour($1,$2,$3);
		}
    | DIVOP div DLCL flow {
    		$$=add_child_neighbour($2,$3,$4);
    	}
    | consume DIVOP div DLCL flow {
    		$$=add_child_neighbour($1,$3,$4,$5);
    	}
    | DTOP dt DLCL { 
    		$$=add_startChild($2,$3);
    	}
    | DTOP dt DLCL flow {
    		$$=add_child_neighbour($2,$3,$4);
    	}
    | consume DTOP dt DLCL {
    		$$=add_startChild($1,$3,$4);
    	}
    | consume DTOP dt DLCL flow {
    		$$=add_child_neighbour($1,$3,$4,$5);
    	}
	;

dt: flow DTCL DDOP dd {
			$$=add_child_neighbour($1,$2,$4);
		}
	| flow DTCL consume DDOP dd {
			node *n=add_child_neighbour($1,$2,$3);
			copy(n->v,$5->v);
			$$=n;
		}
	| flow DTCL DDOP dd DTOP dt {
			node *n=add_child_neighbour($1,$2,$4);
			copy(n->v,$6->v);
			$$=n;
		}
	| DTCL DDOP dd {
			$$=add_neighbour($1,$3);
		}
    | DTCL DDOP dd DTOP dt {
    		node *n=add_neighbour($1,$3);
    		copy(n->v,$5->v);
			$$=n;	
    	}
	;

dd: flow DDCL {
			$$=add_startChild($1,$2);
		}
	| flow DDCL DDOP dd {
			$$=add_child_neighbour($1,$2,$4);	
		}
	| DDCL {
			$$=add_start($1);
		}
	| DDCL DDOP dd {
			$$=add_neighbour($1,$3);
		}
	| flow DDCL consume {
			$$=add_child_neighbour($1,$2,$3);
		}
	| flow DDCL consume DDOP dd {
			node* n=add_child_neighbour($1,$2,$3);
			copy(n->v,$5->v);
			$$=n;
		}
	| DDCL consume {
			$$=add_neighbour($1,$2);
		}
	| DDCL consume DDOP dd {
			node *n=add_neighbour($1,$2);
			copy(n->v,$4->v);
		}
	;

caption: flow CAPCL {
		}
	| CAPCL {
		}
	| flow CAPCL consume {
		}
	| CAPCL consume {
		}
	;

table: CAPOP caption TABCL {
		}
	| CAPOP caption TABCL flow {
		}
	| consume CAPOP caption TABCL {
		}
	| consume CAPOP caption TABCL flow {
		}
	| CAPOP caption TROP tr TABCL {
		}
	| TROP tr TABCL {
		}
    | CAPOP caption TROP tr TABCL flow {
    	}
    | TROP tr TABCL flow {
    	}
	| TABCL {
		}
	| TABCL flow {
		}
	;

tr: TRCL {
		}
	| consume TRCL {
		}
	| THOP th TRCL {
		}
	| TDOP td TRCL {
		}
	| TRCL consume {
		}
	| consume TRCL consume {
		}
	| THOP th TRCL consume {
		}
	| TDOP td TRCL consume {
		}
	| TRCL TROP tr  { 
		}
	| TRCL consume TROP tr {
		}
    | THOP th TRCL TROP tr {
    	}
    | TDOP td TRCL TROP tr {
    	}
    | THOP th TRCL consume TROP tr {
    	}
    | TDOP td TRCL consume TROP tr {
    	}
	;

th: THCL {
		}
	| flow THCL {
		}
	| THCL consume {
		}
	| flow THCL consume  {
		}
	| THCL THOP th  {
		}
	| flow THCL THOP th {
		}
	| THCL consume THOP th {
		}
	| flow THCL consume THOP th { 
		}
	;

td: TDCL {	
		}
    | flow TDCL {
    	}
    | TDCL consume {
    	}
    | flow TDCL consume {
    	}
    | TDCL TDOP td {
    	}
    | flow TDCL TDOP td {
    	}
    | TDCL consume TDOP td {
    	}
    | flow TDCL consume TDOP td {
    	}
    ;

figure: flow FIGCAPOP figcap FIGCL {
		}
	| FIGCAPOP figcap FIGCL {
		}
	| FIGCAPOP figcap flow FIGCL { 
		}
	| flow FIGCL {
		}
	| FIGCL {
		}
	| flow FIGCAPOP figcap FIGCL flow {
		}
    | FIGCAPOP figcap FIGCL flow {
    	}
	| FIGCAPOP figcap flow FIGCL flow {
		}
    | flow FIGCL flow {
    	}
	| FIGCL flow {
		}
	| flow FIGCAPOP figcap flow FIGCL flow {
		}
	| flow FIGCAPOP figcap flow FIGCL {
		}
	;

figcap: flow FIGCAPCL {
		}
	| FIGCAPCL {
		}
	;

img:  ATTRIBUTE ATTRIBUTEVAL img { 
			treeNode* ptr=$3->v[0];
			add_attributes(ptr,$1,$2);
			$$=$3;
		}
	| IMGCL { 	node* n = new node;
				vn v;
				treeNode* ptr=add_node("IMG");
				v.pb(ptr);
				copy(n->v,v);
				$$=n;
		} 
	; 

atag: ATTRIBUTE ATTRIBUTEVAL AOPOP flow ACL flow {
		}
	| AOPOP flow ACL flow {
		}
	| AOPOP ACL flow {
		}
	| ATTRIBUTE ATTRIBUTEVAL AOPOP flow ACL {
		}
    | AOPOP flow ACL { 
   		}
    | AOPOP ACL {
   		}
	| ATTRIBUTE ATTRIBUTEVAL AOPOP ACL flow {
		}
	| ATTRIBUTE ATTRIBUTEVAL AOPOP ACL {
		}
	;

font: ATTRIBUTE ATTRIBUTEVAL FONTOOP FONTCL {
		}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP flow FONTCL {
		}
	| FONTOOP flow FONTCL {
		}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP FONTCL flow {
		}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP flow FONTCL flow {
		}
	| FONTOOP flow FONTCL flow {
		}
	;

%%
void yyerror(const char *msg){
	printf("%s\n",msg);
}

int main(int argc,char **argv){
	extern FILE *yyin;
	if(argc >= 2){
		if(!(yyin = fopen(argv[1],"r"))){
			printf("File Error");
			return 0;
		}
	}
	yyparse();
	return 0;
}  
char* concat(char *s1,char *s2){
	char *p = (char *)malloc(1+strlen(s1)+strlen(s2));
	strcat(p,s1);
	strcat(p,s2);
	return p;	
}
void update(vn* v){
	vn* temp;
	treeNode* first = (*v)[0];
	for(int i=1;i<(*v).size();i++){
		if(first->tagVal == (*v)[i]->tagVal){
			first->content=first->content+(*v)[i]->content;
		}
		else{
			(*temp).pb(first);
			first = (*v)[i];
		}
	}
	(*temp).pb(first);
	v=temp;
}