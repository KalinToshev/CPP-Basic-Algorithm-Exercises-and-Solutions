/*
Write a C++ program to create a string that is 4 copies of the 2 front characters of a given string. If the given string length is less than 2 return the original string.
Sample Input:
"C Sharp"
"JS"
"a"
Sample Output:
C C C C
JSJSJSJS
a
*/

#include <iostream>

using namespace std;

string stringCopies(string s)
{
    if (s.length() < 2)
        return s;

    string frontCharacters = s.substr(0, 2);

    string newString;
    newString.reserve(frontCharacters.length() * 4);

    for (size_t i = 0; i < 4; i++)
    {
        newString += frontCharacters;
    }

    return newString;
    
}

int main()
{
    cout << stringCopies("C Sharp") << endl;
    cout << stringCopies("JS") << endl;
    cout << stringCopies("a") << endl;

    return 0;
}