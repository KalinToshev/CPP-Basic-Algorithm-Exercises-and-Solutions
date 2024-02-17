/*
Write a C++ program to create another string made of every other character starting with the first from a given string.
Sample Input:
"Python"
"PHP"
"JS"
Sample Output:
Pto
PP
J
*/

#include <iostream>

using namespace std;

string create_string_alternate_chars(string str)
{
    string result = "";

    for (int i = 0; i < str.length(); i++)
        if (i % 2 == 0)
            result += str[i];

    return result;
}

int main()
{
    cout << create_string_alternate_chars("Python") << endl;
    cout << create_string_alternate_chars("PHP") << endl;
    cout << create_string_alternate_chars("JS") << endl;

    return 0;
}