/*
Write a C++ program to check if a given string begins with 'abc' or 'xyz'. If the string begins with 'abc' or 'xyz' return 'abc' or 'xyz' otherwise return the empty string.
Sample Input:
"abc"
"abcdef"
"C"
"xyz"
"xyzsder"
Sample Output:
abc
abc

xyz
xyz
*/

#include <iostream>

using namespace std;

void checkString(string str)
{
    if (str.substr(0, 3) == "abc" || str.substr(0, 3) == "xyz")
        cout << str.substr(0, 3) << endl;
    else
        cout << "" << endl;
}

int main() 
{
    checkString("abc");
    checkString("abcdef");
    checkString("C");
    checkString("xyz");
    checkString("xyzsder");

    return 0;
}