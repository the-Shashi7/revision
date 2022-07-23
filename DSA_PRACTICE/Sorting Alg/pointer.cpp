#include<iostream>
using namespace std;

void trick(int *temp1 , int *temp2){
    int *temp = temp1;
    temp1 = temp2;
    temp2 = temp;
}

int main(){

    int a =100;
    int b =200;
    int c = 300;
    trick(&a,&b);
    trick(&a,&c);

    cout<<b;
    /* int i = 10;
    int *p = &i;
    cout<<&i<<endl;
    cout<<i<<endl;
    cout<<*p<<endl; */

    /* int a[10];

    cout<<a<<endl;
    cout<< &a[1] <<endl;
        a[0] = 5;
        a[1] = 15;
    cout<<*a<<endl;
    cout<<*(a+1)<<endl;

    return 0; */
}