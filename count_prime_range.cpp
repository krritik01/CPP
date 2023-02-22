// Program to find how many prime number in a given range
// Ex - range from 0 to 10
//    Output : 4

// Count Primes in Ranges
// 0 -->for not prime
// 1 -->for prime
#include <bits/stdc++.h>
using namespace std;
int isprime(int c)
{
   if (c <= 1)
      // 0 and 1 is not prime number
      return 0;
   for (int i = 2; i <= num / 2; i++)
   {
      if (num % i == 0)
      {
         return 0;
      }
   }
   return 1; // if both failed then num is prime
}
int countPrimes(int a, int b)
{
   int count = 0;
   for (int i = a; i <= b; i++)
   {
      if (isprime(i) == 1)
      {
         count++;
      }
   }
   return count;
}
int main()
{
   int num1, num2;
   cin >> num1 >> num2;
   cout<< "Primes in Ranges : " << countPrimes(num1, num2);
   return 0;
}


// Find prime in a given range using function
/*
#include<iostream>
using namespace std;
bool is_Prime(int a){
    if(a<=1){
        return 0;
    }
    for(int i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
    
}
int main(){
    int c,b;
    cin>>c>>b;
    for(int i=c;i<=b;i++){
    if(is_Prime(i)){
        cout<<i<<" ";
    }
        
    }
    return 0;
}
*/
    

