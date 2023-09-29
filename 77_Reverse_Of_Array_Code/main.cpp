#include<iostream>
using namespace std;

/*

35
30
20
15
10
5

*/

int main()
{
    int arr[] = {5, 10, 15, 20, 30, 35};
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = length - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

///////////////////////////////////////////////////////
// If the user Enters the value:

/*

///////////////////Output 2//////////////////////////

Enter Numbers:
23 43 54 65 76
76 65 54 43 23

*/


// int main()
// {

//     int arr[5];
//     cout << "Enter Numbers: " << endl;
//     for(int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];    
//     }
//     for(int i = 4; i >= 0; i--)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;

// }