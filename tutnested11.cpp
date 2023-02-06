// prime number between a and b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two number\n";
    cin >> a >> b;
    cout << "Prime number between these two number is\n";

    for (int i = a; i <= b; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {

            cout << i << endl;
        }
    }

    return 0;
}
