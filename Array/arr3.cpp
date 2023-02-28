// Array scope
#include <bits/stdc++.h>
using namespace std;
int update(int arr[],int n){
    cout<<"Inside the function"<<endl;
    //This is how to  update's element's of array
    // arr[0]=20;
    // arr[1]=200;
    // arr[2]=2000;
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
  
    cout<<endl<<endl<<"Going back to main function"<<endl;
    return 0;
}
    
int main(){
  int arr[3]={1,2,3};
    //array call
  update(arr,3);
    cout<<endl<<"Printing in main function"<<endl;
    for (int i = 0; i < 3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  
return 0;
}