// Find unique element. Array of given size n, whwere n=[2m+1].
// Now in the given array 'm' is present twice and one number is present once, we have to find that number that is appeared once
// We use XOR in this question 

#include <iostream>
using namespace std;

int findUnique(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
    
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"The unique element is "<<findUnique(arr, n);
    return 0;
}