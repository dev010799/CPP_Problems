#include<iostream>
#include<math.h>
using namespace std;

/*

///////////////////Output 1///////////////////////
Enter the value of a, b and c:
-20 -90 40
11300
Roots are Real & UnEqual

//////////////////Output 2///////////////////////
Enter the value of a, b and c:
1 3 5
-11
Roots are Imaginary

*/

int main()
{
    int a, b , c, d, r1,r2;
    cout << "Enter the value of a, b and c: " << endl;
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;
    cout << d << endl;

    r1 = r2 = -b / 2 * a;

    if(d > 0)
    {
        cout << "Roots are Real & UnEqual";
        r1 = ((-b + sqrt(d)))/ 2 * a;
        r2 = ((-b - sqrt(d)))/2 * a;
        cin >> r1 >> r2;
    }
    else if(d == 0)
    {
        cout << "Roots are Real & equal" << endl;
        r1 = ((-b + sqrt(d)))/ 2 * a;
        r2 = ((-b - sqrt(d)))/ 2 * a;
        cin >> r1 >> r2;
    }
    if(d < 0)
    {
        cout << "Roots are Imaginary" << endl;

    }
    return 0;
    
}
