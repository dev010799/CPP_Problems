#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*

///////////////Output/////////////////////

The Maximum Value is: 120


*/


int Maximum_Of_Four(int a, int b, int c, int d)
{
    if(a > b && a > c && a > d)
    {
        return a;
    }
    else if(b > a && b > c && b > d)
    {
        return b;
    }
    else if(c > a && c > b && c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main()
{
    int result;
    result = Maximum_Of_Four(20, 40, 120, 90);
    cout << "The Maximum Value is: " << result << endl;

    return 0;
}