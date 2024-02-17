/*
Write a C++ program to create the string which is n (non-negative integer) copies of a given string.
Sample Input:
"JS", 2
"JS", 3
"JS", 1
Sample Output:
JSJS
JSJSJS
JS
*/

#include <iostream>

using namespace std;

string create_copies_of_string(string str, int n)
{
    if (n == 1)
        return str;
        
    string newStr = "";

    for (int i = 0; i < n; i++)
    {
        newStr += str;
    }

    return newStr;
}

int main()
{
    cout << create_copies_of_string("JS", 2) << endl;
    cout << create_copies_of_string("JS", 3) << endl;
    cout << create_copies_of_string("JS", 1) << endl;

    return 0;
}