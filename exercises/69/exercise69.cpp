/*
Write a C++ program to create a string of length 2 starting at the given index of a given string.
Sample Input:
"Hello", 1
"Python", 2
"on", 1
Sample Output:
el
th
on
*/

#include <iostream>

using namespace std;

string create_string(string str, int index)
{
     return index + 2 <= str.length() ? str.substr(index, 2) : str.substr(0, 2);
}

int main()
{
    cout << create_string("Hello", 1) << endl;
    cout << create_string("Python", 2) << endl;
    cout << create_string("on", 1) << endl;

    return 0;
}