#include<iostream>
using namespace std;

/*

Enter the Integers: 
8 11
Eight
Nine
Even
Odd

*/

int main()
{
    int a, b;
    cout << "Enter the Integers: " << endl;
    cin >> a >> b;

    for(int i{a}; i <= b; i++)
    {
        switch(i)
        {
            case 1:
            cout << "One" << endl;
            break;

            case 2:
            cout << "Two" << endl;
            break;

            case 3:
            cout << "Three" << endl;
            break;

            case 4:
            cout << "Four" << endl;
            break;

            case 5:
            cout << "Five" << endl;
            break;

            case 6:
            cout << "Six" << endl;
            break;

            case 7:
            cout << "Seven" << endl;
            break;

            case 8:
            cout << "Eight" << endl;
            break;

            case 9:
            cout << "Nine" << endl;
            break;

            default:
            if(i % 2 == 0)
            {
                cout << "Even" << endl;
            }
            else
            {
                cout << "Odd" << endl;
            }

        }
    }

    return 0;
}