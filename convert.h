#include<bits/stdc++.h>
#include "ast.h"
using namespace std;

extern map<string,pair<string,string>> convertTag;

struct lexNode{
	string type;
	string value;
	vector<lexNode*> children;
};

void define_mapping();
lexNode* add_lexNode(string type,string value);
lexNode* add_lexNode(string type);
lexNode* add_lexChild(lexNode *root,string t,string v);
lexNode* add_lexChild(lexNode *root,string t);
lexNode* add_lexChild(lexNode *root,lexNode *node);
lexNode* root_init();
void printLex(lexNode *root);
lexNode* convert(lexNode *root,treeNode *node);