#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if(n % 2 == 0)
    {
        cout << "It is an Even Number" << endl;
    }
    else
    {
        cout << "It is an Odd Number"  << endl;
    }

    return 0;
}

// cout << "=======================================================" << endl;

// Using For loop:

// To print Odd:
// int main()
// {
//     for(int i {1}; i <= 100; i += 2)
//     {
//         cout << i << endl;
//     }

//     return 0;
// }

// cout << "==========================================" << endl;

// To print Even:

// int main()
// {
//     for(int i {2}; i <= 100; i += 2)
//     {
//         cout << i << endl;
//     }

//     return 0;
// }