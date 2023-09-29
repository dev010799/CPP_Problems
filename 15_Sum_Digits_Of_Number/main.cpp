#include<iostream>
using namespace std;

int main()
{
    int n, r, sum {0};
    cout << "Enter a number: ";
    cin >> n;

    while(n != 0)           // or We can also take (n>0).
    {
        r = n % 10;         // This is for Remainder.
        sum = sum + r;
        n = n / 10;         // This is for Quotient.
    }
    cout << "Sum is: " << sum;
    return 0;
}

