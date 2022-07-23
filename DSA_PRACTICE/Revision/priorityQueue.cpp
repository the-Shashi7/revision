#include<iostream>
#include "priorityQueue.h"
using namespace std;

int main(){
    priorityQueue p;
    p.insert(4);
    p.insert(8);
    p.insert(16);
    p.insert(32);
    p.insert(64);

    cout<<p.getMin()<<endl;

}