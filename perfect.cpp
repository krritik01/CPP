#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int c = 0;
    int p=0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                /* code */
                c += j;
            }
        }
        if (c==i)
        {
            /* code */
            cout<<i<<endl;
            p++;
            
        }
        c=0;
        
    }
   

    return 0;
}