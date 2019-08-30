#include<bits/stdc++.h>
#include "ast.h"
using namespace std;

extern map<string,pair<string,string>> convertTag;

struct lexNode{
	string value;
	vector<lexNode*> children;
};

void define_mapping();
lexNode* add_lexNode(string val);
lexNode* add_lexChild(lexNode *root,string s);
lexNode* root_init();
lexNode* convert(lexNode *root,treeNode *node);
void printLex(lexNode *root);