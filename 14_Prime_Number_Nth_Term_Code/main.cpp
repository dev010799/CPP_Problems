#include<iostream>
using namespace std;

// k is used to check the iteration of i's every value(to check prime or NotPrime)
int main()
{
    int n, i, k;
    cout << "Enter Nth Integer: ";
    cin >> n;

    for(i = 2; i < n; i++)
    {
        for(k = 2; k < i; k++)
        {
            if(i % k == 0)
            {
                cout << "";
                break;
            }
        }
        if(k == i)
        {
            cout << k << endl;
        }   
    }

    return 0;
}