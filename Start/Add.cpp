#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<(a+b)<<endl;
    cout<<((a>b)?(a-b):(b-a))<<endl;
    return 0;
}
