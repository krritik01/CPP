// Find sum of all elements in a given array
#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n){
int sum=0;
for (int i = 0; i <n; i++){
    sum=sum+arr[i];
}
return sum;
}    

int main(){
    int s;
    cin>>s;
    int arr[100];
    for (int i = 0; i < s; i++){
        cin>>arr[i];
    }
    cout<<"Sum of all elements of array are "<<sum(arr,s)<<endl;
return 0;
}








// If value is given then we use this apporoch
/*
#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n){
int sum=0;
for (int i = 0; i <n; i++){
    sum=sum+arr[i];
}
return sum;
}
int main(){
    int arr[5]={2,3,4,5,6};
    cout<<"Given elements are "<<endl;
    for (int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Sum of all elements of array are "<<sum(arr,5)<<endl;
return 0;
}
*/
