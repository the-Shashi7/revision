#include<iostream>
#include "treeNodeClass.h"
using namespace std;

int main(){
/*     TreeNode<int> * root = new TreeNode<int>(1);
    TreeNode<int> *node1 = new TreeNode<int>(2);
    TreeNode<int> *node2 = new TreeNode<int>(3);
    TreeNode<int> *node3 = new TreeNode<int>(4);

    root->children.push_back(node1);
    root->children.push_back(node2);

    node1->children.push_back(node3); */

    TreeNode<int> * root =takeInput();

    Display(root);
}