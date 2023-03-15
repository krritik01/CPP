#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n){   
    for(int i = 0; i < n-1; i++ ){
        int minIndex = i;
        for(int j = i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[7]={3,5,14,3,65,47,34};
    int size= sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,size);
    printArray(arr, size);
     return 0;  
}