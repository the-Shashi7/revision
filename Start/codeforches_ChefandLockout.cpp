#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if ( a == (b+c) || b == (a+c) || c ==(a+b))
        {
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        
        t--;
    }
    
}