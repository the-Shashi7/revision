#include<iostream>
#include<climits>
using namespace std;
#include "StackClassUsingArray.cpp"

int main(){
    StackUsingArray s;
    s.push(70);
    s.push(60);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;


    return 0;
}