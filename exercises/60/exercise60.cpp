/*
Write a C++ program to create a new string using the first two characters of a given string. If the string length is less than 2, return the original string.
Sample Input:
"Hello"
"Hi"
"H"
" "
Sample Output:
He
Hi
H
*/

#include <iostream>

using namespace std;

string stringManipulation(string s)
{
    return s.length() < 2 ? s : s.substr(0, 2);
}

int main()
{
    cout << stringManipulation("Hello") << endl;
    cout << stringManipulation("Hi") << endl;
    cout << stringManipulation("H") << endl;
    cout << stringManipulation(" ") << endl;

    return 0;
}