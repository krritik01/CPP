#include<iostream>
using namespace std;
int main(){
long n;
long fac=1;
cin>>n;
while(n>=1){
    fac=fac*n;
    n=n-1;
}
cout<<fac<<endl;
    return 0;
}
