#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int diff;
    int sum=0;
    int prod=1;
   
   while (n!=0)
   {
    int digit=n%10;
    prod=prod*digit;
    sum=sum+digit;
    n=n/10;
   }

   cout<<prod<<endl;
   cout<<sum<<endl;
   diff=prod-sum;
   cout<<diff<<endl;
   
}