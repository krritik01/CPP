#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int n1=0,n2=1;
cout<<n1<< " "<<n2<< " ";
for (int i = 1; i <=n; i++)
{
    int nextTerm=n1+n2;
    n1=n2;
    n2=nextTerm;
    cout<<nextTerm<< " ";
}


}