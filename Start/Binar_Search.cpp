#include<iostream>
using namespace std;

int binary_search(int a[],int n,int key){
   int s= 0;
   int e = n-1;
   while(s<=e){
       int mid = (s+e)/2;
      if(a[mid]==key){
        return mid;}

      else if (a[mid]<key){
       return e = mid -1;}

      else
        {return s= mid+1 ;}
   }
}

int main(){
 int n, key;
 cin >> n;
 int a[1000];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 cout<<"Enter elements you want to saerch  ";
 cin>>key;
 cout<<binary_search(a,n,key);
}
