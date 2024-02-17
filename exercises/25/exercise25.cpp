/*
Write a C++ program to create another string which is n (non-negative integer) copies of the first 3 characters of a given string. If the length of the given string is less than 3 then return n copies of the string.
Sample Input:
"Python", 2
"Python", 3
"JS", 3
Sample Output:
PytPyt
PytPytPyt
JSJSJS
*/

#include <iostream>

using namespace std;

string repeat_first_3_characters(string str, int n)
{
    if (str.length() < 3)
    {
        string temp = str;
        for (int i = 1; i < n; i++)
        {
            str += temp;
        }

        return str;
    }

    string new_str = "";

    for (int i = 0; i < n; i++)
    {
        new_str += str.substr(0, 3);
    }

    return new_str;
}

int main()
{
    cout << repeat_first_3_characters("Python", 2) << endl;
    cout << repeat_first_3_characters("Python", 3) << endl;
    cout << repeat_first_3_characters("JS", 3) << endl;

    return 0;
}