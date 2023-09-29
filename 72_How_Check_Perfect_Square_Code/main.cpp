#include<iostream>
#include<math.h>
using namespace std;

/*
///////////Output 1://///////////////
Enter a Number:
24
Number is Not a Perfect square

///////////Output 2://///////////////
Enter a Number:
16
Number is a Perfect Square


*/

int main()
{
    int n;
    cout << "Enter a Number: " << endl;
    cin >> n;

    int s = sqrt(n);
    if(s * s == n)
    {
        cout << "Number is a Perfect Square" << endl;
    }
    else
    {
        cout << "Number is Not a Perfect square" << endl;
    }
    return 0;
}