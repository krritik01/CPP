// Find power of any number
/*
#include<iostream>
using namespace std;
int main(){
    // pow(a,b)
int a,b;
cin>>a>>b;
int ans=1;
for(int i=1;i<=b;i++){
    ans=ans*a;
}
cout<<ans<<endl;

}
*/

// Now we solve this uisng functions

#include<iostream>
using namespace std;
int power(int a,int b){

 int ans=1;
 for (int i = 1; i <= b; i++)
 {
    ans=ans*a;
 }
 return ans;
 

}
int main(){
    int a,b;
    cin>>a>>b;
    int answer = power(a,b);
    cout<<"Answer is "<<answer<<endl;
// We can call as many times we want
int c,d;
    cin>>c>>d;
      answer = power(c,d);
    cout<<"Answer is "<<answer<<endl;

int e,f;
    cin>>e>>f;
      answer = power(e,f);
    cout<<"Answer is "<<answer<<endl;
}


/*
// We can also write like this
#include<iostream>
using namespace std;
int power(int num1,int num2){

 int ans=1;
 for (int i = 1; i <= num2; i++)
 {
    ans=ans*num1;
 }
 return ans;
 

}
int main(){
    int a,b;
    cin>>a>>b;
    int answer = power(a,b);
    cout<<"Answer is "<<answer<<endl;
// We can call as many times we want
int c,d;
    cin>>c>>d;
      answer = power(c,d);
    cout<<"Answer is "<<answer<<endl;

int e,f;
    cin>>e>>f;
      answer = power(e,f);
    cout<<"Answer is "<<answer<<endl;
}
*/

// We can also write like this
#include<iostream>
using namespace std;
int power(int a,int b){
 int ans=1;
 for (int i = 1; i <= b; i++)
 {
    ans=ans*a;
 }
 return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
    return 0;
}
    
