#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
	string tagVal;
	string content;
	vector<string> att;
	vector<string> attVal;
	vector<node*> children;
}treeNode;


treeNode* add_node();
treeNode* add_node(string s);
treeNode* add_node(string s,string content);
treeNode* add_children(treeNode* node,treeNode* c1);
treeNode* add_attributes(treeNode* node,string att,string attVal);
treeNode* update_children(treeNode* node,treeNode* child);
void print(treeNode* node);