// Exception case when ans*10>INT_MAX and ans*10<INT_MIN
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
  int ans=0;
while(n!=0){
 int digit=n%10;
 if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
    return 0;
 }
 ans  = (ans*10) +digit;
 n=n/10;
}
cout<<ans<<endl;
return 0;
}