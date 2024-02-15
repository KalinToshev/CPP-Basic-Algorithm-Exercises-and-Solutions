/*
Write a C++ program to create a string taking the first 3 characters of a given string. Then, return the string with the 3 characters added to both the front and back. If the given string length is less than 3, use whatever characters are there.
Sample Input:
"Python"
"JS"
"Code"
Sample Output:
PytPythonPyt
JSJSJS
CodCodeCod
*/

#include <iostream>

using namespace std;

string stringCreation(string s)
{
    if (s.length() < 3)
        return s + s + s;

    return s.substr(0, 3) + s + s.substr(0, 3);
}

int main()
{
    cout << stringCreation("Python") << endl;
    cout << stringCreation("JS") << endl;
    cout << stringCreation("Code") << endl;

    return 0;
}