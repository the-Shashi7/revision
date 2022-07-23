#include<iostream>
using namespace std;
#include "node_class.h";

int main(){

    //node declation statically 
    /* Node n1(1);
    Node *head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    Display(head);
    
    //Node declation Dynamically

    Node *n11 = new Node(11);
    Node *n21 = new Node(21);
    Node *n31 = new Node(31);
    Node *n41 = new Node(41);
    Node *n51 = new Node(51);

    Node*head1 = n11;
    n11->next = n21;
    n21->next = n31;
    n31->next = n41;
    n41->next = n51; */
    Node *head =  takeInput();
    Display(head);
    int position,data;
    //cin>>position>>data;
    //head = Insert(head,position,data);
    //Display(head);
    cin>>data;
    // Delete(head,position);
    FindNode(head,data);
    Display(head);
    return 0;
}