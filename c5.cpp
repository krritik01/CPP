#include <iostream>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
     int n,m,k;
     cin>>n>>m>>k;
     if(m*k>=n){
         cout<<"yes"<<endl;
     }
     else{
         cout<<"no"<<endl;
     }
 }
	return 0;
}
