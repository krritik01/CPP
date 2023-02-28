// Find min and max element in array
#include <bits/stdc++.h>
using namespace std;

// Find min
int getMin(int num[],int n){
    int min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}


// Find max
int getMax(int num[],int n){
 int max=INT_MIN;
 for (int i = 0; i < n; i++){
     if(num[i]>max){
        max=num[i];
     }
 }
     return max;
 }

int main(){
   int size;
   cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
   cout<<"Maximum value is "<<getMax(num,size)<<endl;
   cout<<"Minimum value is "<<getMin(num,size)<<endl;
    
return 0;
}


// Another method
// We have predefined function to find max and min
/*
#include <bits/stdc++.h>
using namespace std;

    
int getmin(int num[],int n){
    int mini=INT_MAX;
    for (int i = 0; i <n; i++){
        mini=min(mini,num[i]);   
    }
    return mini;
}

int getmax(int num[],int n){
    int maxi=INT_MIN;
    for (int i = 0; i <n; i++){
        maxi=max(maxi,num[i]);  
    }
    return maxi;
}

int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
         cin>>num[i];
    }

cout<<"Maximun is "<<getmax(num,size)<<endl;
cout<<"Minimum is "<<getmin(num,size)<<endl;
  
return 0;
}
*/







