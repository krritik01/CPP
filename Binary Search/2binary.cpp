// Binary Search in decending sorted array
#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        if (key < arr[mid])
        {
            start = start + 1;
        }
        else if (key > arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[7] = {7, 6, 5, 4, 3, 2, 1};
    int n;
    cin >> n;
    int size = sizeof(arr) / sizeof(arr[0]);
    int search = binary_search(arr, size, n);
    if (search == -1)
    {
        cout << "Value is not found in array" << endl;
    }
    else
    {
        cout << "Value is found in array at index " << search << endl;
    }
    return 0;
}