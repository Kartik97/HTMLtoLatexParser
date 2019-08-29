#include<bits/stdc++.h>
using namespace std;

typedef struct treenode
{
	string tagVal;
	string content;
	vector<string> att;
	vector<string> attVal;
	vector<treenode*> children;
}treeNode;

typedef struct node{
	vector<treeNode*> v;
}node;


treeNode* add_node();
treeNode* add_node(string s);
treeNode* add_node(string s,string content);
void add_children(treeNode* node,vector<treeNode*> c1);
void add_attributes(treeNode* node,string att,string attVal);
void update_children(treeNode* node,vector<treeNode*> child);
void print(treeNode* node);