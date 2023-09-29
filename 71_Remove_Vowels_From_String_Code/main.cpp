#include<bits/stdc++.h>
using namespace std;

/*

Enter a String:
Devprakash Mishra AEIOU
D
v
p
r
k
s
h

M
s
h
r


*/

int main()
{
    string str;
    cout << "Enter a String: " << endl;
    getline(cin,str);

    for(int i {0}; i < str.length(); i++)
    {
        if(str[i] == 'a' || str[i] == 'A')
        {
            continue;
        }
        else if(str[i] == 'e' || str[i] == 'E')
        {
            continue;
        }
        else if(str[i] == 'i' || str[i] == 'I')
        {
            continue;
        }
        else if(str[i] == 'o' || str[i] == 'O')
        {
            continue;
        }
        else if(str[i] == 'u' || str[i] == 'U')
        {
            continue;
        }
        else
        {
            cout << str[i] << endl;
        }
       
    }
    return 0;
}