/*
Write a C++ program to create a string from a given string without the first and last character. This is possible if the first or last characters are 'a' otherwise return the original given string.
Sample Input:
"abcab"
"python"
"abcda"
"jython"
Sample Output:
bca
python
bcd
jython
*/

#include <iostream>

using namespace std;

string create_new_string(string s)
{
    //Check if the first character is 'a' or if the last character is 'a'
    if (s[0] == 'a' || s[s.length() - 1] == 'a')
    {
        //If any of the above conditions are true, return the string without the first and last character
        return s.substr(1, s.length() - 2);
    }

    //If none of the above conditions are true, return the original string
    return s;
}

int main() 
{
    cout << create_new_string("abcab") << endl;
    cout << create_new_string("python") << endl;
    cout << create_new_string("abcda") << endl;
    cout << create_new_string("jython") << endl;

    return 0;
}