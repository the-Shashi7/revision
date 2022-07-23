#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int min = arr[i];
        int k = i;
        for (int j = i+1; j<n; j++){
            if (arr[j] < min){
                min = arr[j];
                k = j;
            }       
        }
        arr[k] =arr[i];
        arr[i] = min;
        
    }
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    //int arr[5] ={20,12,10,15,2};
    int arr[6] ={8,2,9,4,1,3};
    selectionSort(arr,6);
    print(arr,6);
    return 0;
}