#include<iostream>
using namespace std;

int main()
{
    for(int i {1}; i <= 5; i++)
    {
        for(int j {1}; j <= 5; j++)
        {
            if(j <= i)
            {
                cout << "A";
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



