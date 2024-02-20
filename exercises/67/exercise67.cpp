/*
Write a C++ program to create a string using the two middle characters of a given string of even length (at least 2).
Sample Input:
"Hell"
"JS"
Sample Output:
el
JS
*/

#include <iostream>

using namespace std;

string create_string(string str)
{
    if (str.length() % 2 == 0)
    {
        string new_str = str.substr(str.length() / 2 - 1, 2);
        return new_str;
    }
    else
    {
        return str;
    }
}

int main()
{
    cout << create_string("Hell") << endl;
    cout << create_string("JS") << endl;

    return 0;
}