#include <iostream>
using namespace std;

int main()
{
    int amount;
    cin >> amount;
    int Rs2000, Rs500, Rs200, Rs100, Rs50, Rs20, Rs10, Rs5, Rs1;

    switch (1)
    {
    case 1:
        Rs2000 = amount / 2000;
        amount = amount % 2000;
        cout << "No of 2000 Rupee =" << Rs2000 << endl;

    case 2:
        Rs500 = amount / 500;
        amount = amount % 500;
        cout << "No of 500 Rupee =" << Rs500 << endl;

    case 3:
        Rs200 = amount / 200;
        amount = amount % 200;
        cout << "No of 200 Rupee =" << Rs200 << endl;

    case 4:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "No of 100 Rupee =" << Rs100 << endl;
    case 5:
        Rs50 = amount / 50;
        amount =amount%50;
         cout << "No of 50 Rupee =" << 50 << endl;
    case 6:
        Rs20 = amount / 20;
        amount =amount%20;
         cout << "No of 20 Rupee =" << 20 << endl;
    case 7:
        Rs10 = amount / 10;
        amount =amount%10;
         cout << "No of 10 Rupee =" << 10 << endl;
    case 8:
        Rs5 = amount / 5;
        amount =amount%5;
         cout << "No of 5 Rupee =" << 5 << endl;
    case 9:
        Rs5 = amount / 1;
        amount =amount%1;
         cout << "No of 1 Rupee =" << 1 << endl;     
    }
    return 0;
}