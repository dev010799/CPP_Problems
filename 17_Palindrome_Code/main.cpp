#include<iostream>
using namespace std;

int main()
{
    int n, r, t, sum {0};
    cout << "Enter an Integer: ";
    cin >> n;
    t = n;                            // Store n in t variable.

    while(n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }

    if(t == sum)
    {
        cout << "It is a Palindrome Number" << endl;
    }
    else
    {
        cout << "It is Not a Palindrome Number" << endl;
    }
    return 0;
    
}