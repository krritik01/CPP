// print only positive number
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number\n";
    cin >> n;

    do
    {
        cout <<"Number is "<<n << endl;
        cin >> n;
    } while (n > 0);
    return 0;
}