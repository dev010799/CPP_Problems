#include<iostream>
#include<math.h>
using namespace std;

/*

Enter temperature in Degree Celsius
32.34
Temperature in Farhenheit: 90.212

*/

int main()
{
    
    float F, C;
    cout << "Enter temperature in Degree Celsius" << endl;
    cin >> C;

    F = (C * 9/5) + 32;
    // C = 5 / 9 *(F - 32);

    cout << "Temperature in Farhenheit: " << F << endl;
    return 0;

}

