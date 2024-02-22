/*
Write a C++ program to add two given strings. If the given strings have different lengths, remove the characters from the longer string.
Sample Input:
"abc", "abcd"
"Python", "Python"
"JS", "Python"
Sample Output:
abcbcd
PythonPython
JSon
*/

#include <iostream>

using namespace std;

string add_two_strings(string s1, string s2)
{
    //Check the length of the strings
    if (s1.length() > s2.length())
    {
        //Remove the first characters from the longer string
        s1 = s1.substr(s1.length() - s2.length());
    }
    else if (s1.length() < s2.length())
    {
        //Remove the first characters from the longer string
        s2 = s2.substr(s2.length() - s1.length());
    }

    //Add the two strings
    return s1 + s2;
}

int main()
{
    cout << add_two_strings("abc", "abcd") << endl;
    cout << add_two_strings("Python", "Python") << endl;
    cout << add_two_strings("JS", "Python") << endl;

    return 0;
}