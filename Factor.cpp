// Print all factors of the number

#include <bits/stdc++.h>
using namespace std;
int main(){
    int num, i;
    cin >> num;
    cout << "The factors are: ";
    for (i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
