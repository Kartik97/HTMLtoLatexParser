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
treeNode* add_children(treeNode* node,vector<treeNode*> c1);
treeNode* add_attributes(treeNode* node,string att,string attVal);
node* add_child_neighbour(node* c,string name,node *n);
node* add_child_neighbour(node* c1,node* c2,string name,node *n);
node* add_neighbour(string name,node *n);
node* add_start(string name);
node* add_startChild(node* n,string name);
node* add_startChild(node *c1,node* c2,string name);
int find_parent(node* n);
void print(treeNode* node);
void write(treeNode *node);
void clearFile(string s);