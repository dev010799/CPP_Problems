#include<iostream>
using namespace std;
// 1 is not considered as prime number.
int main()
{
    int n, i;
    cout << "Enter a Number: " << endl;
    cin >> n;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            cout << "Not a prime number" <<  endl;
            break;
        }

    }

    if(i == n)
    {
        cout << "Number is a Prime Number" << endl;
    }

    return 0;
}