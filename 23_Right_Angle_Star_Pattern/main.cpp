#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Value: ";
    cin >> n;

    for(int i {1}; i <= 5; i++)
    {
        for(int j {1}; j <= 5; j++)
        {
            if(j <= i)
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