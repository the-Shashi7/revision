#include<iostream>
using namespace std;
#include "binaryTreeNode.h"

int main(){
  /*   binaryTreeNode<int>* root = new binaryTreeNode<int>(1);
    binaryTreeNode<int>* node1 = new binaryTreeNode<int>(2);
    binaryTreeNode<int>* node2= new binaryTreeNode<int>(3);

    root->left = node1;
    root->right = node2; */

    binaryTreeNode<int>* root = takeInput();
    Display(root);
    delete root;
}