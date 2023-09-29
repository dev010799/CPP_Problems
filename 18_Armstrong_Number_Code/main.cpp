#include<iostream>
using namespace std;
// What is Armstrong Number?
// Armstrong Number is : 
// Logic: Find the cube root of each given digit & sum it
// If the All digits = sum of cubed digits then we say Number is Armstrong Number.
// For example: 153 = (1)^3 + (2)^3 + (3)^3 = 1 + 125 + 27 = 153
// If you want to check then insert 370,371 both are Armstrong Number.


int main()
{
    int n, r, t, sum {0};
    cout << "Enter the Numbers: ";
    cin >> n;
    t = n;                             

    while(n != 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }

    if(t == sum)
    {
        cout << "The Number is Armstrong Number" << endl;
    }
    else
    {
        cout << "The Number is Not an Armstrong Number" << endl;
    }

    return 0;   
}