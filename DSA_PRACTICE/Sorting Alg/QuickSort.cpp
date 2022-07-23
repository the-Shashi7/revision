#include<iostream>
using namespace std;

int Partition(int arr[], int low,int high){
    int Pivot = arr[low];
    int i =low+1;
    int j =high;
    int temp;

    do
    {
        while (arr[i]<=Pivot){
            i++;
        }
        while (arr[j]>Pivot){
            j--;
        }
        if(i<j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] =temp;
        }
    } while (i<j);
    
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] =temp;
    
    return j;
}

void QuickSort(int arr[],int low ,int high){
    int partitionIndex;

    if(low<high){
        partitionIndex = Partition(arr,low,high);
        QuickSort(arr,low,partitionIndex-1);
        QuickSort(arr,partitionIndex+1,high);
    }
}

void PrintArray(int* arr, int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[9] ={3,5,2,13,12,12,13,1,9};
    QuickSort(arr,0,8);
    PrintArray(arr,9);
    return 0;
}