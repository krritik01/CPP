// Odd or Even using function

#include <bits/stdc++.h>
using namespace std;
int odd=0;
int even=1;
int odd_even(int a){
    if(a%2==0){
        return even;
    }
    else{
        return odd;
    }
}
int main(){
int num;
cin>>num;
 
 if (odd_even(num)){
    cout<<"Number is even"<<endl;
 }
 else{
    cout<<"Number is odd"<<endl;
 }  
return 0;
}


// using bitwise operator
/*
#include<iostream>
using namespace std;

bool isEven_Odd(int num1){
    if(num1&1){
        return 0;
    }
    return 1;
}

int main(){
    int n;
    cin>>n;

    if(isEven_Odd(n)){
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
 return 0;
}
*/




// Other method
/*
#include <bits/stdc++.h>
using namespace std;

bool is_Even(int num){
    return (num&1)==0;
}
int main(){   
int num;
cin>>num;
    if(is_Even(num)){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
return 0;
}
*/