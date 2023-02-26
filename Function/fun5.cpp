//number is prime or not using function
// 1-->for prime
// 0-->for not prime
#include <bits/stdc++.h>
using namespace std;
int is_Prime(int num){
    for (int i = 2; i < num; i++){
        //divide hogya then number is not a prime no.
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin >> n;
    if (is_Prime(n)){
        cout << "Prime" << endl;
    }
    else{
        cout << "Not prime" << endl;
    }
    return 0;
}