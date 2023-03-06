// Palindrome number is a number which can be read from left to right or right to left the answer will be same.
// Ex-->2002,232,45654, etc..

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n;
    t=n;
     int sum=0;
    while(n!=0){
        int digit=n%10;
        sum = sum*10+digit;
        n=n/10;
    }
    if(t==sum){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
return 0;
}