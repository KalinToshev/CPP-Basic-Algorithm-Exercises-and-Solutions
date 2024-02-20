/*
Write a C++ program to create another string using three copies of the last two characters of a given string of length at least two.
Sample Input:
"Hello"
"Hi"
Sample Output:
lololo
HiHiHi
*/

#include <iostream>

using namespace std;

string create_string(string str)
{
    return str.substr(str.length() - 2) + str.substr(str.length() - 2) + str.substr(str.length() - 2);
}

int main()
{
    cout << create_string("Hello") << endl;
    cout << create_string("Hi") << endl;
    
    return 0;
}