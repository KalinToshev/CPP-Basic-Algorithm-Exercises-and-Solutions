/*
Write a C++ program to create a new string without the first and last characters of a given string of any length.
Sample Input:
"Hello"
"JS"
""
Sample Output:
ell
*/

#include <iostream>

using namespace std;

string remove_first_and_last_characters(string str)
{
    if (str.length() < 2)
    {
        return "";
    }

    return str.substr(1, str.length() - 2);
}

int main()
{
    cout << remove_first_and_last_characters("Hello") << endl;
    cout << remove_first_and_last_characters("JS") << endl;
    cout << remove_first_and_last_characters("") << endl;

    return 0;
}