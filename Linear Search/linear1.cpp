#include <bits/stdc++.h>
using namespace std;
bool search(int arr[],int size,int value){
 for (int i = 0; i < size; i++){
    if(arr[i]==value)
    return 1;
 }
 return 0;
}

int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int value;
cin>>value;
bool found=search(arr,10,value);
if(found){
    cout<<"Value is found in the given array"<<endl;
}
else{
    cout<<"Value is not found"<<endl;
}


    
return 0;
}