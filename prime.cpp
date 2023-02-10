// Find weather the number is prime or not
#include <bits/stdc++.h>
using namespace std;
int main(){
    
int n,i;
cin>>n;

for(i=2; i<n; i++){
    if(n%i==0){
        cout<<"Number is non prime"<<endl;
        break;
    }
}
if(i==n){
cout<<"Number is prime"<<endl;
}
    
return 0;
}