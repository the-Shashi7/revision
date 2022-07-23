#include<iostream>
using namespace std;


void InsertionSort(int arr[], int size){
    for (int step = 1; step < size; step++)
    {
        int key = arr[step];
        int j = step-1;

        while ( key < arr[j] && j >= 0)
        {
            arr[j+1]=arr[j];
            --j;
        }
        cout<<j<<endl;
        arr[j+1] = key;
    }
}

void Print(int arr[],int size){
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] ={8,2,4,1,3};
    InsertionSort(arr,5);
    Print(arr,5);
    return 0;
}