// decimal to binary 
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    
int decimal,remainder,binary=0,product=1;
cin>>decimal;

while (decimal!=0){

remainder=decimal%2;
binary=binary+(remainder*product);
decimal=decimal/2;
product *=10;
} 
cout<<binary<<endl;
return 0;
}