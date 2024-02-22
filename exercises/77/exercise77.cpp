/*
Write a C++ program to create a new string using 3 copies of the first 2 characters of a given string. If the length of the given string is less than 2 use the whole string.
Sample Input:
"abc"
"Python"
"J"
Sample Output:
ababab
PyPyPy
JJJ
*/

using namespace std;

#include <iostream>

string create_a_new_string(string s)
{
    //Check if the length of the string is less than 2
    //If it is, return 3 copies of the whole string
    if (s.length() < 2)
        return s + s + s;

    //Save the first 2 characters from the string
    string firstTwoChars = s.substr(0, 2);

    //Return 3 copies of the first 2 characters
    return firstTwoChars + firstTwoChars + firstTwoChars;
}

int main()
{
    cout << create_a_new_string("abc") << endl;
    cout << create_a_new_string("Python") << endl;
    cout << create_a_new_string("J") << endl;

    return 0;
}