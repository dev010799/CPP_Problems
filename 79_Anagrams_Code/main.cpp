#include<iostream>
#include<bits/stdc++.h>

/*

///////////////Output///////////////
The Words are Anagrams

*/

using namespace std;

int main()
{
    string s1 = {"Hello World"};
    string s2 = {"World Hello"};

    int length1 = s1.length();
    int length2 = s2.length();
    
    if(length1 == length2)
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end()); 

        if(s1 == s2)
        {
            cout << "The Words are Anagrams" << endl;
        }  
        else
        {
            cout << "The words are not Anagram" << endl;
        }
    }
    

    return 0;

}