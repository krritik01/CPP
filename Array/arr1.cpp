#include <bits/stdc++.h>
using namespace std;
int main(){
// declare

// We use loop to initialize an array with one default valuexcept zero
int arr[5]={3};
for(int i=0; i<5;i++){
    arr[i]=3;
cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"Value at index 2 is "<<arr[2]<<endl<<endl;

// For zero as a default value
int arr1[5]={0};
for(int i=0; i<5;i++){
cout<<arr1[i]<<" ";
}
cout<<endl<<"Value at index 2 is "<<arr1[2]<<endl<<endl;

// Printing with all value
int arr2[5]={1,3,5,7,9};
for (int i = 0; i <5; i++)
{
    cout<<arr2[i]<<" ";
}
cout<<endl;
cout<<"Value at index 2 is "<<arr2[2]<<endl<<endl;

    // if we have only two value in array
    int arr3[5]={1,3};
for (int i = 0; i <5; i++)
{
    cout<<arr3[i]<<" ";
}
cout<<endl;
cout<<"Value at index 2 is "<<arr3[2]<<endl;
cout<<"Value at index 2 is "<<arr3[1]<<endl<<endl;

return 0;
}