#include<iostream>
using namespace std;
// formula to calculate HCF & LCM:
// a * b = HCF * LCM.
// We take x & y because our the value changes of 'a' occurs in code.
// Thats why we store the value of x & y in a & b respectively.

int main()
{
    int a, b, hcf, lcm, r, x, y;
    cout << "Enter the Values: ";
    cin >> a >> b;

    x = a;
    y = b;

    while(true)
    {
        lcm = a;
        r = a % b;
        if(r == 0)
        {
            break;
        }
        a = a * 2;   
    }
    hcf = x * y / lcm;
    cout << "LCM is" << lcm << endl;
    cout << "HCF is" << hcf << endl;

    return 0;
}