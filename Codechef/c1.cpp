#include <iostream>
using namespace std;

int main() {
    int count=0;
int arr[4];
for(int i=0;i<4;i++){
    cin>>arr[i];
    if(arr[i]>=10){
        count++;
    }
}
cout<<count;

	return 0;
}
