#include<bits/stdc++.h>
#include "convert.h"
using namespace std;

extern map<string,pair<string,string>> convertTag;
int main(){
	define_mapping();
	lexNode *root=root_init();
	printLex(root);
	return 1;
}