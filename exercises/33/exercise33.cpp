/*
Write a C++ program to create a new string from a given string where a specified character is removed except at the beginning and end.
Sample Input:
"xxHxix", "x"
"abxdddca", "a"
"xabjbhtrb", "b"
Sample Output:
xHix
abxdddca
xajhtrb
*/

#include <iostream>

using namespace std;

string removeChar(string s, char c)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0 && s[i] == c)
            continue;

        if (i == s.length() - 1 && s[i] == c)
            continue;

        if (s[i] == c)
        {
            s.erase(i, 1);
            i--;
        }
    }
    return s;
}

int main()
{
    cout << removeChar("xxHxix", 'x') << endl;
    cout << removeChar("abxdddca", 'a') << endl;
    cout << removeChar("xabjbhtrb", 'b') << endl;
    
    return 0;
}