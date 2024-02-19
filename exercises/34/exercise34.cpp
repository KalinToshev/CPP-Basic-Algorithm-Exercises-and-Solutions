/*
Write a C++ program to create the string of the characters at indexes 0,1,4,5,8,9 ... from a given string.
Sample Input:
"Python"
"JavaScript"
"HTML"
Sample Output:
Pyon
JaScpt
HT
*/

#include <iostream>

using namespace std;

string create_string(string str)
{
    string new_str = "";
    
    for (int i = 0; i < str.length(); i += 4)
    {
        int c = i + 2;

        int n = 0;

        n += c > str.length() ? 1 : 2;

        new_str += str.substr(i, n);
    }

    return new_str;
}

int main()
{
    cout << create_string("Python") << endl;
    cout << create_string("JavaScript") << endl;
    cout << create_string("HTML") << endl;

    return 0;
}