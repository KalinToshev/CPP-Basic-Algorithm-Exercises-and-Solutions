/*
Write a C++ program to create a new string of length 2, using the first two characters of a given string. If the given string length is less than 2 use '#' as missing characters.
Sample Input:
"Hello"
"Python"
"a"
""
Sample Output:
He
Py
a#
##
*/

#include <iostream>

using namespace std;

string create_new_string(string str)
{
    if (str.length() < 2)
    {
        if (str.length() == 0)
            return "##";
        else
            return str + "#";
    }

    return str.substr(0, 2);
}

int main()
{
    cout << create_new_string("Hello") << endl;
    cout << create_new_string("Python") << endl;
    cout << create_new_string("a") << endl;
    cout << create_new_string("") << endl;

    return 0;
}