/*code to print
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/
#include<iostream>
using namespace std;
int main(){
    int rows,col;
    cin>>rows>>col;
    for (int i = 1; i <=rows; i++)
    {
        for (int j = 1; j <=col; j++)
        {
            cout<< i;
        }
        cout<<endl;
    }
}