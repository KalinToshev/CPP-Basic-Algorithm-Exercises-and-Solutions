/*
Write a C++ program to check if the string 'yt' appears at index 1 in a given string. If it appears return a string without 'yt' otherwise return the original string.
Sample Input:
"Python"
"ytade"
"jsues"
Sample Output:
Phon
ytade
jsues
*/

#include <iostream>

using namespace std;

string check_if_yt_string_appears_at_index_1(string str)
{
    return str.substr(1, 2) == "yt" ? str.erase(1, 2) : str;
}

int main()
{
    cout << check_if_yt_string_appears_at_index_1("Python") << endl;
    cout << check_if_yt_string_appears_at_index_1("ytade") << endl;
    cout << check_if_yt_string_appears_at_index_1("jsues") << endl;

    return 0;
}