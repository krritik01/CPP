#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  // loop to print pattern
  for (int i = 1; i <=n; i++) {
    // loop for space
    for (int j = 1; j <= n - i; j++) {
      cout << " ";
    }
    // loop for star
    for (int k = 1; k <= i; k++) {
      cout << "*";
    }
    cout <<endl;
  }
  return 0;
}