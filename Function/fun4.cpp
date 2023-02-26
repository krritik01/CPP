// print counting function
#include<iostream>
using namespace std;

void count(int num){
    // function body
    for(int i=1;i<=num;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;

    // function call
   count(n);

   return 0;
}