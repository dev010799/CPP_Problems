#include<iostream>
using namespace std;

int main()
{
    for(int i {1}; i <= 8; i++)
    {
        for(int j {1}; j <= 8; j++)
        {
            if(i == j || j == 9 - i)
            {
                cout << "*";
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