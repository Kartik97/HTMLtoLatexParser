%{
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include "ast.h"

using namespace std;

#define copy_list(v1,v2) copy(v2.begin(),v2.end(),back_inserter(v1))
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
%type <object> figcap atag miscph consumeph atagph font fontph img figure center

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
				copy_list(n->v,v);
				$$=n;
			}
	| BR 	{  	vn v;
				v.push_back(add_node("BR"));
				node* n = new node;
				copy_list(n->v,v);
				$$=n;
			}
	| TEXT  { 	vn v;
				v.push_back(add_node("TEXT",$1));
				node* n = new node;
				copy_list(n->v,v);
				$$=n;
			}
	| IMGOP img {
			$$=$2;
		}
	| SYMBOL { 
				vn v;
				v.push_back(add_node("SYMBOL",$1));
				node* n = new node;
				copy_list(n->v,v);
				$$=n;
			}
	;

consume: consume misc {
			vn v1,v2;
			v1 = $1->v;
			v2 = $2->v;
			int s=v1.size();
			if(v1[s-1]->tagVal=="TEXT" && v2[0]->tagVal=="TEXT" ){
				v1[s-1]->content=v1[s-1]->content+v2[0]->content;
			}
			node* n = new node;
			copy_list(n->v,v1);	
			if(v2[0]->tagVal!="TEXT") {
				copy_list(n->v,v2);
			}
			else if(v2.size()>1 && v2[1]->tagVal!="TEXT"){
				copy(v2.begin()+1,v2.end(),back_inserter(n->v));
			}
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
	
consumeph: consumeph miscph {
			vn v1,v2;
			v1 = $1->v;
			v2 = $2->v;
			int s=v1.size();
			if(v1[s-1]->tagVal=="TEXT" && v2[0]->tagVal=="TEXT" ){
				v1[s-1]->content=v1[s-1]->content+v2[0]->content;
			}
			node* n = new node;
			copy_list(n->v,v1);	
			if(v2[0]->tagVal!="TEXT") {
				copy_list(n->v,v2);
			}
			else if(v2.size()>1 && v2[1]->tagVal!="TEXT"){
				copy(v2.begin()+1,v2.end(),back_inserter(n->v));
			}
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
			int s=v1.size();
			if(v1[s-1]->tagVal=="TEXT" && v2[0]->tagVal=="TEXT" ){
				v1[s-1]->content=v1[s-1]->content+v2[0]->content;
			}
			node* n = new node;
			copy_list(n->v,v1);	
			if(v2[0]->tagVal!="TEXT") {
				copy_list(n->v,v2);
			}
			else if(v2.size()>1 && v2[1]->tagVal!="TEXT"){
				copy(v2.begin()+1,v2.end(),back_inserter(n->v));
			}
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
			$$=$2;
		}
	| FIGOP figure {
			$$=$2;
		}
	| AOP atag { 
			$$=$2;
		}
	| FONTOP font { 
			$$=$2;
		}
	| CENTEROP center { 
			$$=$2;
		}
	;

center: flow CENTERCL { 
			$$=add_startChild($1,$2);
		}
	| flow CENTERCL flow { 
			$$=add_child_neighbour($1,$2,$3);
		}
	| CENTERCL {
			$$=add_start($1);
		}
	| CENTERCL flow { 
			$$=add_neighbour($1,$2);
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
			copy_list(n->v,$1->v);
			copy_list(n->v,$3->v);
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
			copy_list(n->v,$5->v);
			$$=n;
		}
	| flow DTCL DDOP dd DTOP dt {
			node *n=add_child_neighbour($1,$2,$4);
			copy_list(n->v,$6->v);
			$$=n;
		}
	| DTCL DDOP dd {
			$$=add_neighbour($1,$3);
		}
    | DTCL DDOP dd DTOP dt {
    		node *n=add_neighbour($1,$3);
    		copy_list(n->v,$5->v);
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
			copy_list(n->v,$5->v);
			$$=n;
		}
	| DDCL consume {
			$$=add_neighbour($1,$2);
		}
	| DDCL consume DDOP dd {
			node *n=add_neighbour($1,$2);
			copy_list(n->v,$4->v);
		}
	;

caption: flow CAPCL {
			$$=add_startChild($1,$2);
		}
	| CAPCL {
			$$=add_start($1);
		}
	| flow CAPCL consume {
			$$=add_child_neighbour($1,$2,$3);
		}
	| CAPCL consume {
			$$=add_neighbour($1,$2);
		}
	;

table: CAPOP caption TABCL {
			$$=add_startChild($2,$3);
		}
	| CAPOP caption TABCL flow {
			$$=add_child_neighbour($2,$3,$4);
		}
	| consume CAPOP caption TABCL {
			$$=add_startChild($1,$3,$4);
		}
	| consume CAPOP caption TABCL flow {
			$$=add_child_neighbour($1,$3,$4,$5);
		}
	| CAPOP caption TROP tr TABCL {
			$$=add_startChild($2,$4,$5);
		}
	| TROP tr TABCL {
			$$=add_startChild($2,$3);
		}
    | CAPOP caption TROP tr TABCL flow {
    		$$=add_child_neighbour($2,$4,$5,$6);
    	}
    | TROP tr TABCL flow {
    		$$=add_child_neighbour($2,$3,$4);
    	}
	| TABCL {
			$$=add_start($1);
		}
	| TABCL flow {
			$$=add_neighbour($1,$2);
		}
	| consume TROP tr TABCL {
			$$=add_startChild($1,$3,$4);
		}
    | consume CAPOP caption TROP tr TABCL flow {
    		node* n=add_child_neighbour($1,$3,$6,$7);
    		add_children(n->v[0],$5->v);
    		$$=n;
    	}
    | consume TROP tr TABCL flow {
    		$$=add_child_neighbour($1,$3,$4,$5);
    	}
	| consume TABCL {
			$$=add_startChild($1,$2);
		}
	| consume TABCL flow {
			$$=add_child_neighbour($1,$2,$3);
		}
	;

tr: TRCL {
			$$=add_start($1);
		}
	| consume TRCL {
			$$=add_startChild($1,$2);
		}
	| THOP th TRCL {
			$$=add_startChild($2,$3);
		}
	| TDOP td TRCL {
			$$=add_startChild($2,$3);
		}
	| TRCL consume {
			$$=add_neighbour($1,$2);
		}
	| consume TRCL consume {
			$$=add_child_neighbour($1,$2,$3);
		}
	| THOP th TRCL consume {
			$$=add_child_neighbour($2,$3,$4);
		}
	| TDOP td TRCL consume {
			$$=add_child_neighbour($2,$3,$4);
		}
	| TRCL TROP tr  { 
			$$=add_neighbour($1,$3);
		}
	| TRCL consume TROP tr {
			node* n=add_neighbour($1,$2);
			copy_list(n->v,$4->v);
			$$=n;
		}
    | THOP th TRCL TROP tr {
    		$$=add_child_neighbour($2,$3,$5);
    	}
    | TDOP td TRCL TROP tr {
    		$$=add_child_neighbour($2,$3,$5);
    	}
    | THOP th TRCL consume TROP tr {
    		node* n=add_child_neighbour($2,$3,$4);
			copy_list(n->v,$6->v);
			$$=n;	
    	}
    | TDOP td TRCL consume TROP tr {
    		node* n=add_child_neighbour($2,$3,$4);
			copy_list(n->v,$6->v);
			$$=n;	
    	}
	| consume THOP th TRCL {
			$$=add_startChild($1,$3,$4);
		}
	| consume TDOP td TRCL {
			$$=add_startChild($1,$3,$4);
		}
	| consume THOP th TRCL consume {
			$$=add_child_neighbour($1,$3,$4,$5);
		}
	| consume TDOP td TRCL consume {
			$$=add_child_neighbour($1,$3,$4,$5);
		}
	| consume TRCL TROP tr  { 
			$$=add_child_neighbour($1,$2,$4);
		}
	| consume TRCL consume TROP tr {
			node* n=add_child_neighbour($1,$2,$3);
			copy_list(n->v,$5->v);
			$$=n;
		}
    | consume THOP th TRCL TROP tr {
    		$$=add_child_neighbour($1,$3,$4,$6);
    	}
    | consume TDOP td TRCL TROP tr {
    		$$=add_child_neighbour($1,$3,$4,$6);
    	}
    | consume THOP th TRCL consume TROP tr {
    		node* n=add_child_neighbour($1,$3,$4,$5);
			copy_list(n->v,$7->v);
			$$=n;	
    	}
    | consume TDOP td TRCL consume TROP tr {
    		node* n=add_child_neighbour($1,$3,$4,$5);
			copy_list(n->v,$7->v);
			$$=n;	
    	}

	;

th: THCL {	$$=add_start($1);
		}
	| flow THCL {
			$$=add_startChild($1,$2);
		}
	| THCL consume {
			$$=add_neighbour($1,$2);
		}
	| flow THCL consume  {
			$$=add_child_neighbour($1,$2,$3);
		}
	| THCL THOP th  {
			$$=add_neighbour($1,$3);
		}
	| flow THCL THOP th {
			$$=add_child_neighbour($1,$2,$4);
		}
	| THCL consume THOP th {
			node* n=add_neighbour($1,$2);
		  	copy_list(n->v,$4->v);
    		$$=n;			
		}
	| flow THCL consume THOP th { 
			node* n=add_child_neighbour($1,$2,$3);
		  	copy_list(n->v,$5->v);
    		$$=n;
		}
	;

td: TDCL {	
			$$=add_start($1);
		}
    | flow TDCL {
	    	$$=add_startChild($1,$2);
    	}
    | TDCL consume {
    		$$=add_neighbour($1,$2);
    	}
    | flow TDCL consume {
	 	   	$$=add_child_neighbour($1,$2,$3);
    	}
    | TDCL TDOP td {
	    	$$=add_neighbour($1,$3);
    	}
    | flow TDCL TDOP td {
    		$$=add_child_neighbour($1,$2,$4);
    	}
    | TDCL consume TDOP td {
	    	node *n=add_neighbour($1,$2);
  		  	copy_list(n->v,$4->v);
    		$$=n;
    	}
    | flow TDCL consume TDOP td {
 	 	  	node* n=add_child_neighbour($1,$2,$3);
    		copy_list(n->v,$5->v);
    		$$=n;
    	}
    ;

figure: flow FIGCAPOP figcap FIGCL {
			$$=add_startChild($1,$3,$4);
		}
	| FIGCAPOP figcap FIGCL {
			$$=add_startChild($2,$3);
		}
	| FIGCAPOP figcap flow FIGCL { 
			$$=add_startChild($2,$3,$4);
		}
	| flow FIGCL {
			$$=add_startChild($1,$2);
		}
	| FIGCL {
			$$=add_start($1);
		}
	| flow FIGCAPOP figcap FIGCL flow {
			$$=add_child_neighbour($1,$3,$4,$5);
		}
    | FIGCAPOP figcap FIGCL flow {
    		$$=add_child_neighbour($2,$3,$4);
    	}
	| FIGCAPOP figcap flow FIGCL flow {
			$$=add_child_neighbour($2,$3,$4,$5);
		}
    | flow FIGCL flow {
    		$$=add_child_neighbour($1,$2,$3);
    	}
	| FIGCL flow {
			$$=add_neighbour($1,$2);
		}
	| flow FIGCAPOP figcap flow FIGCL flow {
			node* n=add_child_neighbour($1,$3,$5,$6);
    		add_children(n->v[0],$4->v);
    		$$=n;
		}
	| flow FIGCAPOP figcap flow FIGCL {
			node* n=add_startChild($1,$3,$5);
    		add_children(n->v[0],$4->v);
    		$$=n;	
		}
	;

figcap: flow FIGCAPCL {
			$$=add_startChild($1,$2);
		}
	| FIGCAPCL {
			$$=add_start($1);
		}
	;

img:  ATTRIBUTE ATTRIBUTEVAL img { 
			treeNode *ptr=$3->v[0];
			add_attributes(ptr,$1,$2);
			$$=$3;
		}
	| IMGCL { 	node *n = new node;
				vn v;
				treeNode *ptr=add_node("IMG");
				v.pb(ptr);
				copy_list(n->v,v);
				$$=n;
		} 
	; 

atag: ATTRIBUTE ATTRIBUTEVAL AOPOP flow ACL flow {
			vn v;
			treeNode *ptr=add_node($5);
			add_attributes(ptr,$1,$2);
			add_children(ptr,$4->v);
			v.pb(ptr);
			node* n=new node;
			copy_list(n->v,v);
			copy_list(n->v,$6->v);
			$$=n;
		}
	| AOPOP flow ACL flow {
			$$=add_child_neighbour($2,$3,$4);
		}
	| AOPOP ACL flow {
			$$=add_neighbour($2,$3);
		}
	| ATTRIBUTE ATTRIBUTEVAL AOPOP flow ACL {
			node *n=add_startChild($4,$5);
			add_attributes(n->v[0],$1,$2);
			$$=n;
		}
    | AOPOP flow ACL {
    		$$=add_startChild($2,$3); 
   		}
    | AOPOP ACL {
    		$$=add_start($2);
   		}
	| ATTRIBUTE ATTRIBUTEVAL AOPOP ACL flow {
			node *n=add_neighbour($4,$5);
			add_attributes(n->v[0],$1,$2);
			$$=n;
		}
	| ATTRIBUTE ATTRIBUTEVAL AOPOP ACL {
			node *n=add_start($4);
			add_attributes(n->v[0],$1,$2);
			$$=n;
		}
	;

font: ATTRIBUTE ATTRIBUTEVAL FONTOOP FONTCL {
			node *n=add_start($4);
			add_attributes(n->v[0],$1,$2);
			$$=n;
		}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP flow FONTCL {
			node *n=add_startChild($4,$5);
			add_attributes(n->v[0],$1,$2);
			$$=n;
		}
	| FONTOOP flow FONTCL {
			$$=add_startChild($2,$3);
		}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP FONTCL flow {
			node *n=add_neighbour($4,$5);
			add_attributes(n->v[0],$1,$2);
			$$=n;
		}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP flow FONTCL flow {
			node *n=add_child_neighbour($4,$5,$6);
			add_attributes(n->v[0],$1,$2);
			$$=n;
		}
	| FONTOOP flow FONTCL flow {
			$$=add_child_neighbour($2,$3,$4);
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