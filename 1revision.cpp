#include <iostream>
using namespace std;
int main()
{

    // for loop
    /*for (int i = 1; i<=40; i++)
    {
        cout<<i<<endl;
    }*/

    // while loop
    /*int i=1;
    while(i<=20){
        cout<<i<<endl;
        i++;
    }*/

    // do while loop
    /*int i=1;
    do{
        cout<<i<<endl;
        i++;
    }
    while(i<=5);
    }*/
    

    // while loop
    /*int n;
    int factorial=1;
    cin>>n;
    while(n>=1){
        factorial=factorial*n;
        n=n-1;
    }
    cout<<factorial<<endl;
    return 0;
    }*/

    // int n;
    // int factorial=1;
    // cin>>n;
    // while(n>=1){
    //     factorial=factorial*n;
    //     n=n-1;
    // }
    // cout<<factorial<<endl;
    // return 0;

    // typecasting
    /*char ch = 'k';
      cout << (int)ch;
      }*/

// ASCII value
// int a='a';
// cout<<a<<endl;
// negative number
// int a=-5;
// cout<<a<<endl;

// Operators
// bool give 0 for false and 1 for true
/*int a=3,b=5;
bool check=(a==b);
cout<<check<<endl;
bool check1=(a>b);
cout<<check1<<endl;
bool check2=(a<b);
cout<<check2<<endl;
bool check3=(a!=b);
cout<<check3<<endl;
}*/

/*int a,b,c,d;
cin>>a>>b>>c>>d;
if(a==b&&c==d){
    cout<<"It is valid"<<endl;
}
else{
    cout<<"It in not valid"<<endl;
}
*/

// cin does not read space,tab,enter, So we used cin.get() for that to read
/*int a;
a=cin.get();
cout<<a<<endl;
*/

/*int a=9;
if(a==9){
    cout<<"niney\n";
}
if(a>0){
    cout<<"Positive";
}
else{
    cout<<"Negative";
}
*/

/*int a=2;
int b=a+1;

if((a=3)==b){
    cout<<a;
}
else{
    cout<<a+2;
}
*/

/*int a=34;
if(a>30){
    cout<<"HeLLo CoDErs";
}
else if(a==34){
    cout<<"We aRe heRe to leArn";
}
else{
    cout<<"Do whaTever yoU wAnt";
}
*/

/*char ch;
cin>>ch;
if(ch>='a'&&ch<='z'){
    cout<<"Lower case";
}
else if(ch>='A'&&ch<='Z'){
    cout<<"Upper case";
}
else{
    cout<<"This is numeric value";
}
}*/



// While LOOPS
/*int n;
cin>>n;

int i=1;
while(i<=n){
    cout<<i<<" ";
    i=i+1;
}
*/
/*int n;
int i=1;
int sum=0;
cin>>n;
while (i<=n)
{
    sum=sum+i;
    i++;
}
cout<<sum<<endl;
}
*/

// sum of even number
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    x=n/2*(4+(n-1)*2);
    std::cout << x << std::endl;
    return 0;
}*/

// sum of even number
/*int n ;
int i=0;
int sum =0;
cin>>n;
cout<<"The even number is "<<endl;
while(i<=n){
    if(i%2==0){
        sum=sum+i;
       cout<<i<<" ";
    }
     i++;
}
cout<<"\n"<<sum;
}*/

// Number is prime or not
/*int n;
int i=2;
cin>>n;
while(i<n){
   if(n%i==0){
cout<<"Not prime for "<<i<<endl;
   }
   else{
       cout<<"Prime for "<<i<<endl;
   }
   i++;
}
}*/

//  convert fahrenheit to celcius table
/*float f,c;
 cin>>f;
 c=(f-32)*5/9;
 cout<<"The temperature in Celsius is "<<c<<endl;
}*/
//  convert celcius to fahrenheit table
/* f,c;
cin>>c;
f=(c*9)/5+32;
 cout<<"The temperature in fahrenheit is "<<f<<endl;
}*/

// bitwise operator
/*int a=4,b=6;
cout<<(a&b)<<endl;
cout<<(a|b)<<endl;
cout<<(~a)<<endl;
cout<<(~b)<<endl;
cout<<(a^b)<<endl;
}*/

// Left shift and Right shift operator
/*int a=5;
int b=12;
// left shift 
cout<<(a<<1)<<endl;
cout<<(a<<2)<<endl;
// right shift 
cout<<(b>>2)<<endl;
cout<<(b>>3)<<endl;
}*/

// Increment and Decrement operator
/*int a=10;
cout<<(++a)<<endl;
// this tell first increment me, so it value will be 11
cout<<(a++)<<endl;
// this tell first use me the increment me so at first it print 11 and increment its value and become 12  
cout<<(a--)<<endl;
// first print the value and then decrement me
cout<<(--a)<<endl;
// it tell first decrement me then print the value 
}*/

// for loop

// print 1 to n and sum
/*int n;
cin>>n;
int sum=0;

for(int i=1;i<=n;i++){
    cout<<i<<endl;
    sum=sum+i;
}
cout<<sum<<endl;
}*/

// printing fibonacci series and sum
/*int n;
cin>>n;
int sum =0;
 int a=0,b=1;
 cout<<a<<" "<<b<<" ";
 for (int i = 1; i <=n; i++)      
//  here the value of i depends how much range you want to print i will 2, i will be 3 and so on.
 {
    int nextTerm=a+b;
    cout<<nextTerm<<" ";
    a=b;
    b=nextTerm;
   sum =sum+nextTerm;
 }
 cout<<endl;
 cout<<sum;
}*/

// Number is prime or not this check for all value of n using break
/*int n;
cin>>n;
for(int i=2;i<n;i++){
if(n%i==0){
    cout<<"Not prime for "<<i<<endl;
}
else{
    cout<<"Prime for "<<i<<endl;
}
}
}
// Number is prime or not this checks for only one value user entered
int n,i;
cin>>n;

for(i=2; i<n; i++){
    if(n%i==0){
        cout<<"Number is non prime"<<endl;
        break;
    }
}
if(i==n){
cout<<"Number is prime"<<endl;
}
}*/

// print number from 1 to 100 and remove the number which is divisible by 3 "we use continue to remove because continue is use to skit the iteration".
/*for (int i = 0; i <=100; i++)
{
    if(i%3==0){
    continue;
    }
    cout<<i<<endl;
}
}*/

// Subtract the product and sum of dugit of an integer
/*int n;
cin>>n;
int diff;
 int prod=1;
 int sum=0;
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
cout<<diff<<" ";
}*/
 













