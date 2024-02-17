/*
Write a C++ program to create a string like "aababcabcd" from a given string "abcd".
Sample Input:
"abcd"
"abc"
"a"
Sample Output:
aababcabcd
aababc
a
*/

#include <iostream>

using namespace std;

string create_string_from_a_given_string(string str)
{
    string result = "";

    for (int i = 0; i < str.length(); i++)
        result += str.substr(0, i + 1);

    return result;
}

int main()
{
    cout << create_string_from_a_given_string("abcd") << endl;
    cout << create_string_from_a_given_string("abc") << endl;
    cout << create_string_from_a_given_string("a") << endl;

    return 0;
}