#include<iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a Year: ";
    cin >> year;

    if(year % 400 == 0)
    {
        cout << "This is a Leap year" << endl;
    }

    else if(year % 100 == 0)
    {
        cout << "This is not a Leap Year" << endl;
    }

    else if(year % 4 == 0)
    {
        cout << " This is a Leap year" << endl;
    }

    else
    {
        cout << "This is Not a Leap year" << endl;
    }

    return 0;
    
}