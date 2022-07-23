#include<iostream>
using namespace std;
#include "dynamicArrayClass.cpp"

int main(){
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.Display();
    d1.Add(2,100);cout<<endl;
    d1.Display();
    return 0;
}