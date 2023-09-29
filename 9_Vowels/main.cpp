#include<iostream>
using namespace std;

/*
int main()
{
    char c;
    cout << " Enter a character: ";
    cin >> c;

    if(c == 'a'|| c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') 
    {
        cout << "It is a vowel: " << endl;
    }
    else
    {
        cout << "It is a consonant: " << endl;
    }
    return 0;

}
*/

// cout << "==================================================" << endl;

// Using Switch Case:

int main()
{
    char c;
    cout << " Enter the character: " << endl;
    cin >> c;

    switch(c)
    {
        case 'a':
        cout << "Vowel" << endl;
        break;

        case 'A':
        cout << "Vowel" << endl;
        break;

        case 'e':
        cout << "Vowel" << endl;
        break;

        case 'E':
        cout << "Vowel" << endl;
        break;

        case 'i':
        cout << "Vowel" << endl;
        break;

        case 'I':
        cout << "Vowel" << endl;
        break;

        case 'o':
        cout << "Vowel" << endl;
        break;

        case 'O':
        cout << "Vowel" << endl;
        break;

        case 'u':
        cout << "Vowel" << endl;
        break;

        case 'U':
        cout << "Vowel" << endl;
        break;

        default:
        cout << "It is a consonant";
        break;

    }
    return 0;

}

