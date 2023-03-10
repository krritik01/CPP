#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }
        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else if (key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }   
    return -1;
}
int main() { 
    int even[6] = {2,4,6,8,12,18};
    int x;
    cin>>x;
    int size = sizeof(even) / sizeof(even[0]); 
    int evenIndex = binarySearch(even, 6, x);
    if(evenIndex  == -1){  
        cout << "Key is not present in array"<<endl;
    } else {
        cout << "Key is present at index " << evenIndex<<endl ;
    }
   return 0;
}