#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,j;
    int n = 0 , count = 0;
    cout << "Enter a Number: " << endl;
    cin >> n;

    for(i = 1; i < n; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
                break;
            

        }
        if(j == i)
        {
            if(n % i == 0)
            {
                cout << i;
                count++;

            }
        }
    }
    if(count == 0)
    {
        cout << "Not Found any Prime Factors." << endl;
    }
    return 0;

}