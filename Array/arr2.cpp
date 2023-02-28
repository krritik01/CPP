// Array using function

#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size){

    for (int i = 0; i <size; i++){
        cout<<arr[i]<<" ";
    }
    
} 
int main(){
    int first[10]={3,5,7};
    printArray(first,10);

cout<<endl;
    int second[7]={3,5,7,9,7,3,6};
    printArray(second,7);
    
cout<<endl;
    int third[5]={33,45,65,76,55};
    printArray(third,5);
    cout<<endl;
 int sizethird=sizeof(third)/sizeof(int);

 cout<<sizethird<<endl<<endl;


 char ch[5]={'a','b','c','d','e'};
 for (int i = 0; i <5; i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl<<ch[4]<<endl<<endl;
return 0;
}