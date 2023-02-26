// Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.
// #include <iostream>
// using namespace std;
// float cir(float r)
// {
//     return 2 * 3.14 * r;
// }
// float area(float r)
// {
//     return 3.14 * r * r;
// }
// int main()
// {
//     float r;
//     cin >> r;
//     cout << cir(r) << endl;
//     cout << area(r) << endl;

//     return 0;
// }

// The optimised code
#include <iostream>
using namespace std;
void cir(int r)
{
    cout << 2 * 3.14 * r << endl;
    cout << 3.14 * r * r << endl;
}

int main()
{
    int r;
    cin >> r;
    cir(r);
    return 0;
}
