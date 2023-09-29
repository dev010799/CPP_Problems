#include<iostream>
using namespace std;

/*

///////////////Output////////////////

1
11   
121
1331
14641


*/

int main()
{

    for(int i {1}; i <= 5; i++)
    {
        int k = 1;
        for(int j {1}; j <= 5; j++)
        {
            if(j <= i)
            {
                cout << k;
                k = k * (i - j) / j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}