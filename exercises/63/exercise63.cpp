/*
Write a C++ program to create a new string from two given strings, one of which is shorter and the other is larger. The format of the updated string will be long string + short string + long string.
Sample Input:
"Hello", "Hi"
"JS", "Python"
Sample Output:
HelloHiHello
PythonJSPython
*/

#include <iostream>

using namespace std;

string concatenateStrings(string s1, string s2)
{
    if (s1.length() < s2.length())
    {
        return s2 + s1 + s2;
    }
    else
    {
        return s1 + s2 + s1;
    }
}

int main()
{
    cout << concatenateStrings("Hello", "Hi") << endl;
    cout << concatenateStrings("JS", "Python") << endl;

    return 0;
}