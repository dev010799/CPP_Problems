#include<iostream>
using namespace std;

/*

////////////////Output 1/////////////////
Enter the Numbers:
4
Four

///////////////Output 2/////////////////
Enter the Numbers:
10
Greater than 9

*/

int main()
{
    int n;
    cout << "Enter the Numbers:" << endl;
    cin >> n;

    if(n == 1)
    {
        cout << "One" << endl;
    }
    else if(n == 2)
    {
        cout << "Two" << endl;
    }
    else if(n == 3)
    {
        cout << "Three" << endl;
    }
    else if(n == 4)
    {
        cout << "Four" << endl;
    }
    else if(n == 5)
    {
        cout << "Five" << endl;
    }
    else if(n == 6)
    {
        cout << "Six" << endl;
    }
    else if(n == 7)
    {
        cout << "Seven" << endl;
    }
    else if(n == 8)
    {
        cout << "Eight" << endl;
    }

    else if(n == 9)
    {
        cout << "Nine" << endl;
    }
    else
    {
        cout << "Greater than 9" << endl;
    }
    return 0;
}