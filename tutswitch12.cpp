// Implement a simple calculation between two number using switch case statement

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b;
    cout << "Enter two number\n";
    cin >> a >> b;

    char op;
    cout << "Enter an operator\n";
    cin >> op;


    switch (op)

    {
    case '+':
        cout << a + b << endl;
        break;

    case '-':
        cout << a - b << endl;
        break;

    case '*':
        cout << a * b << endl;
        break;

    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "Enter another operator"<<endl;
    }


    return 0;
}