#include<iostream>
using namespace std;
#include "templateClass.cpp"
int main(){
    Pair<int> p;
    p.setF(2); 
    p.setS(5);
    cout<<p.getS()<<endl;

    return 0;
}