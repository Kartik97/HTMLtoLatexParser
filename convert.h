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
lexNode* convert(treeNode *node,int flag);
lexNode* convert(treeNode *node,int flag,int table);
void printLex(lexNode *root);
lexNode* convert(lexNode *root,treeNode *node);
lexNode* table(treeNode *node);
lexNode* tableNoBorder(treeNode *node);
lexNode* convertTR(lexNode *root,treeNode *node);
void writeTex(lexNode *root,string s);
void writeLex(lexNode *root);
lexNode* convert_TR(treeNode *node,int flag);
string switchChar(string s,char x,string conv);
string checkText(string s);