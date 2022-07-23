#include<iostream>
using namespace std;

void merge(int arr[],int mid, int low, int high){
    int B_array[high];
    int i =low, j = mid+1, k=low;
    while(i<=mid && j<=high){
        if(arr[i] < arr[j]){
            B_array[k] = arr[i];
            k++,i++;
        }else{
            B_array[k] = arr[j];
            k++,j++;
        }
    }

    while (i<=mid)
    {
        B_array[k] =arr[i];
        k++,i++;
    }
    while (j<=high)
    {
        B_array[k] =arr[j];
        k++,j++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = B_array[i];
    }
    
}

void mergeSort(int arr[], int low, int high){
    int mid;
    if(low<high){
        mid = (low + high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,mid,low,high);
    }
}

void PrintArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}





int main(){
    int arr[7] = {9,14,4,8,7,5,6};
    mergeSort(arr,0,6);
    PrintArray(arr,7);
    return 0;
}