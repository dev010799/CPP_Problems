#include<iostream>
using namespace std;
/*
// Swapping of Two Numbers Using third variable.

int main()
{
    int a {10}, b {20}, temp;
    cout << " Enter Two Integers: ";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << " Swapping value is: " << a << " " << b << endl;
}

cout << "=============================================" << endl;
*/

// Swapping of Two numbers without using third variable.

int main()
{
    int a {10}, b {20};
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Swapped values is: " << a << " " << b << endl;
    return 0;
}











