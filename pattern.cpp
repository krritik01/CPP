/* code to print rectangle pattern
*  *  *  *  * 
*  *  *  *  * 
*  *  *  *  * 
*  *  *  *  * 
*  *  *  *  *
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int rows, columns;
//     cout << "Enter the number of rows and columns\n";
//     cin >> rows >> columns;
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= columns; j++)
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }

/*code to print
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int rows,col;
//     cin>>rows>>col;
//     for (int i = 1; i <=rows; i++)
//     {
//         for (int j = 1; j <=col; j++)
//         {
//             cout<< i;
//         }
//         cout<<endl;
//     }
// }

/*code to print
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << j<<" ";
//         }
//         cout << endl;
//     }
// }

/*code to print count pattern
1 2 3
4 5 6
7 8 9
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int count = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << count << " ";
//             count++;
//         }
//         cout << endl;
//     }
// }



/*code to print
1
2 2
3 3 3
4 4 4 4
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for (int i = 1; i <=n; i++)
// {
//     for (int j = 1; j<=i; j++)
//     {
//         cout<<i<< " ";
//     }
//     cout<<endl;
// }
// return 0;
// }

/*code to print Floyd's triangle
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int count = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << count << " ";
//             count++;
//         }
//         cout<<endl;
//     }
// }

/*code to print
1
2 3
3 4 5
4 5 6 7
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//  int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int value = i;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << value << " ";
//             value++;
//         }
//         cout << endl;
//     }
// }




/*code to print
1 
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main(){   
// int n;
// cin>>n;
//   for (int i = 1; i <=n; i++)
//   {
//     for(int j=1; j<=i;j++){
//         cout<<(i-j+1)<< " ";
//     }
//     cout<<endl;
//   }
// return 0;
// }


/*code to print
A A A A
B B B B
C C C C
D D D D
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main(){  
// int n;
// cin>>n;
// for (int i = 1; i <=n; i++)
// {
//     char ch='A'+i-1;
//     for (int j = 1; j <=n; j++)
//     {
//         cout<<ch;
//     }
//     cout<<endl;
// } 
// return 0;
// }



/*code to print
A B C
A B C
A B C
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main(){   
// logic is 
// char ch ='A'+j-1   
// return 0;
// }


/*code to print
A B C
D E F 
G H I
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     char ch='A'; 
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=n; j++)
//         {
//             cout<<ch<< " ";
//             ch++;
//         }
//         cout<<endl;
//     }
// return 0;
// }



/*code to print
A B C
B C D
C D E
*/
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;
// for(int i=1; i<=n; i++)
// {
// for(int j=1; j<=n; j++)
// { 
// char ch = 'A'+i+j-2;
// cout<<ch<<" ";
// ch++;
// }
// cout<<endl;
// }
// return 0;
// }



/*code to print
A
B B
C C C
D D D D
*/
// #include <iostream>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;
// char ch ='A';
// for(int i=1;i<=n;i++){
// for(int j=1;j<=i;j++){
// cout<<ch<< " ";         
// }
// ch++;
// cout<<endl;
// }
//     return 0;
// }



/*code to print
A
A B
A B C
A B C D
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//  int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         char ch = 'A';
//         for (int j = 1; j <= i; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
// }



/*code to print
A
B C
C D E
D E F G
E F G H I
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main(){     
// int n;
// cin>>n;
// for (int i = 1; i <= n; i++)
// {
// for (int j = 1; j <=i; j++)
// {
//         char ch='A'+i+j-2;
//         cout<<ch<<" ";
// }
// cout<<endl;
// }      
// return 0;
// }



/*code to print
D
C D
B C D
A B C D
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main(){     
// int n;
// cin>>n;
// for (int i = 1; i <= n; i++)
// {
//         char start='A'+n-i;
//         for (int j = 1; j <=i; j++)
//         {                
//               cout<<start;
//               start++; 
//         }
//         cout<<endl;       
// }  
// return 0;
// }



 /*code to print
 A B C D 
 B C D E
 C D E F
 D E F G
 */
// #include <bits/stdc++.h>
// using namespace std;
// int main(){     
// int n;
// cin>>n;
// for (int i = 1; i <= n; i++)
// {
// for (int j = 1; j <=n; j++)
// {
//         char ch='A'+i+j-2;
//         cout<<ch<<" ";
// }
// cout<<endl;
// }      
// return 0;
// }



/*code to print Left triangle pattern
 *
 * *
 *  * *
 * * * *
 */
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }
//     return 0;
// }





/*code to print Right triangle pattern
      *
    * *
  * * * 
* * * *
*/
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin>>n;
//   // loop to print pattern
//   for (int i = 1; i <=n; i++) {
//     // loop for space
//     for (int j = 1; j <= n - i; j++) {
//       cout << " ";
//     }
//     // loop for star
//     for (int k = 1; k <= i; k++) {
//       cout << "*";
//     }
//     cout <<endl;
//   }
//   return 0;
// }



/*code to print Left Down Triangle
 *  * * *
 * * *
 * *
 *
 */
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i =n ; i >=1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<< " * ";
//         }
//         cout<<endl;
//     }
// }




/*code to print pattern Right Down Triangle
* * * * 
  * * *
    * *
      *  
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
//  for (int i =1; i<=n; i++)
//  {
//  for (int j=1;j<=i;j++){
//   cout<<"   ";
//  }
// for(int k=n;k>=i;k--){
//   cout<<" * ";
// }
// cout<<endl;
//  }
// return 0;
// }




/*code to print hollow square pattern
*****
*   *
*   *
*   *
*****
*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for (int i = 1; i <=n; i++)
// {
//   for (int j = 1; j <=n; j++)
//   {
//     if(i==1||i==n){
//       cout<<"*";
//     }
//     else if(j==1||j==n){
//       cout<<"*";
//     }
//     else{
//       cout<< " ";
//     }
//   }
//   cout<<endl; 
// }
// return 0;
// }




/*code to print Hollow triangle pattern
*
**
* *
*  *
*   *
******
*/










































































