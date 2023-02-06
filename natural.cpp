// Write a program in C++ to display n terms of natural number and their sum.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number\n";
    cin >> n;

    cout << "The natural number upto " << n << "th terms are: \n";
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {

        cout << i << " ";
        sum = sum + i;
    }
    cout << "\nThe sum is " << sum << endl;
    return 0;
}