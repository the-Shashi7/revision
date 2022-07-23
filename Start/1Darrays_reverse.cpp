#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
        for(int i =0 ; i<=n;i++){
            arr[i] = arr[n-i];
        }    
}

void printArr(int arr[], int n){
    for (int i = 0; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[5] = {1,2,3,4,5};
    printArr(arr,4);
    cout<<arr[4]<<endl;
    reverseArray(arr,4);
    printArr(arr,4);
    return 0;
}