/*
Write a C++ program to combine two strings of length at least 1, after removing their first character.
Sample Input:
"Hello", "Hi"
"JS", "Python"
Sample Output:
elloi
Sython
*/

#include <iostream>

using namespace std;

string combine_strings(string str1, string str2)
{
    return str1.substr(1) + str2.substr(1);
}

int main()
{
    cout << combine_strings("Hello", "Hi") << endl;
    cout << combine_strings("JS", "Python") << endl;

    return 0;
}