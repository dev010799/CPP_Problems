#include<iostream>
using namespace std;
// Logic: Highest Value divide by Lowest value and if the answer occurs 0.
// Then the Highest value is the LCM if answer occurs to be zero.
// If the 0 not occurs in results then Double the Highest value
// If highest value divides the both Pre-Highest & Lowest value then i.e our LCM. 
int main()
{
    int a, b, lcm, r;
    cout << "Enter two Numbers: ";
    cin >> a >> b;

    while(true)
    {
        lcm = a;
        r = a % b;
        if(r == 0)
        {
            break;
        }
        a = a * 2;
        cout << "LCM Value is: " << lcm << endl;
    }
    return 0;

}