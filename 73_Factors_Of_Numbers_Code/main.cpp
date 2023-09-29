#include<iostream>
#include<Math.h>
using namespace std;

/*
//////////////Output 1////////////////////
Enter a Number:
24

1
2
3
4
6
8
12

/////////////Output 2/////////////////////

Enter a Number:
23
1

*/

int main()
{
    int n;
    cout << "Enter a Number: " << endl;
    cin >> n;

    for(int i {1}; i < n; i++)
    {
        if(n % i == 0)
        {
            cout << i <<endl;
        }
    }
    return 0;
}