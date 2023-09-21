#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	  if(100-a>200-2*b){
	      cout<<"Second"<<endl;
	  }
	  else if(100-a==200-2*b){
	      cout<<"Both"<<endl;
	  }
	  else {
	      cout<<"First"<<endl;
	  }
	    
	    
	    
	}
	return 0;
}
