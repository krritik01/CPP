#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter the number\n";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "Largest nunmber is " << num1 << endl;
        }
        else
        {
            cout << "Largest nunmber is " << num3 << endl;
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout << "Largest nunmber is " << num2 << endl;
        }
        else
        {
            cout << "Largest nunmber is " << num3 << endl;
        }
    }
}