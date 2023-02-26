#include <bits/stdc++.h>
using namespace std;
int dummy(int n)
{
    n++;
    cout << "The value for this n is " << n << endl;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    // function call
    dummy(n);
    cout << "The value  for this n is " << n << endl;
    return 0;
}