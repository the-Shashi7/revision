#include<iostream>
using namespace std;

int main(){
  int a[100][100]={0};
  int m;
  int n;
  cin>>m>>n;
  int val =1;
  for(int row=0; row<=m-1;row++){
    for(int col=0;col<=n-1;col++){
        a[row][col]= val;
        val+=1;
        cout<<a[row][col]<<", ";
    }
    cout<<endl;
  }
}
