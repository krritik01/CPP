#include<bits/stdc++.h>
using namespace std;
void palindrome(int n){
    int temp, sum=0;
    temp=n;
    while(n!=0){
         int digit=n%10;
    sum=sum*10+digit;
    n=n/10;
    }
    if(temp==sum){
    cout<<"Palindrome";
}
else{
    cout<<"not";
}
}

int main(){
int n;
cin>>n;
palindrome(n);
return 0;
}