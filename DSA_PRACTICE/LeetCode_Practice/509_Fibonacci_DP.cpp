#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        
        int min[n+1];
        min[0] = 0;
        min[1] = 1;
        for(int i = 2;i<=n;i++){
           min[i] = min[i-1]+min[i-2]; 
        }
        return min[n];
}

int main(){
    cout<<fib(3)<<endl;
    return 0;
} 