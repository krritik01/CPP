#include <bits/stdc++.h>
using namespace std;
int main()
{

    int num1, num2, temp;
    cin >> num1 >> num2;
    temp = num2;
    num2 = num1;
    num1 = temp;
    cout<<"Number after swapping"<<endl;
    cout << num1 << endl << num2 << endl;

    return 0;
}