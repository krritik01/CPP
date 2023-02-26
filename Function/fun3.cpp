// Find the value of nCr
#include <bits/stdc++.h>
using namespace std;

int factorial(int z){
 int fact=1;
 for (int i = 1; i <=z; i++)
 {
    fact=fact*i;
 }
 return fact;
}

// nCr=n!/r1*(n-r)!
int nCr(int n,int r){
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    return num/denom;
}

int main(){
int n,r;
cin>>n>>r;
 cout<<nCr(n,r)<<endl;   
return 0;
}