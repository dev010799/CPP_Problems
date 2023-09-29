#include<iostream>
using namespace std;

/*

A
AB
ABC
ABCD
ABCDE

*/

 int main()
 {
    char c = 'A';
    for(int i {1}; i <= 5; i++)
    {
        c = 'A';
        for(int j {1}; j <= 5; j++)
        {
            if(j <= i)
            {
                cout << c;
                c++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
 }