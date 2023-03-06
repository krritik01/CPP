#include <bits/stdc++.h>
using namespace std;
int main(){
    
int n,t;
cin>>n;
int sum=0;
t=n;
while (n!=0)
{
    int digit=n%10;
    sum=sum+digit*digit*digit;
    n=n/10;
}
if(t==sum){
    cout<<"Armstrong number";
}
else{
    cout<<"Not a armstrong number";
}

    
return 0;
}