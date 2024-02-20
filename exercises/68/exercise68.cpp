/*
Write a C++ program to create a new string using the first and last n characters from a given string of length at least n.
Sample Input:
"Hello", 1
"Python", 2
"on", 1
"o", 1
Sample Output:
Ho
Pyon
on
oo
*/

#include <iostream>

using namespace std;

string create_copies_of_string(string str, int n)
{
    return str.substr(0, n) + str.substr(str.length() - n);
}

int main()
{
    cout << create_copies_of_string("Hello", 1) << endl;
    cout << create_copies_of_string("Python", 2) << endl;
    cout << create_copies_of_string("on", 1) << endl;
    cout << create_copies_of_string("o", 1) << endl;

    return 0;
}