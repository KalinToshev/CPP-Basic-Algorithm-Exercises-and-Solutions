/*
Write a C++ program to create a new string from a string. Return the given string without the first two characters if the two characters at the beginning and end are the same. Otherwise, return the original string.
Sample Input:
"abcab"
"Python"
"abcabab"
Sample Output:
cab
Python
cabab
*/

#include <iostream>

using namespace std;

string create_a_new_string(string str)
{
    //Check if the first two characters are the same as the last two characters
    string firstTwo = str.substr(0, 2);
    string lastTwo = str.substr(str.length() - 2);
    bool same = firstTwo == lastTwo;

    //If they are the same, return the string without the first two characters
    if (same)
        return str.substr(2);
    else
        return str;
    
}

int main()
{
    cout << create_a_new_string("abcab") << endl;
    cout << create_a_new_string("Python") << endl;
    cout << create_a_new_string("abcabab") << endl;
    
    return 0;
}