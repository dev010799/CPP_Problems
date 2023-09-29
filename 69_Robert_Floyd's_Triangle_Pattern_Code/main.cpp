#include<iostream>
using namespace std;

/*

// Floyd's Triangle

1   
23
456
78910

*/

int main()
{
    int num = 1;
    for(int i {1}; i <= 4; i++)
    {
        for (int j {1}; j <= 4; j++)
        {
            if(j <= i)
            {
                cout << num;
                num++;
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