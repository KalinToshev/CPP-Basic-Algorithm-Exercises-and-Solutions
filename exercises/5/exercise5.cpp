/*
Write a C++ program to create a string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged.
Sample Input:
"if else"
"else"
Sample Output:
if else
if else
*/

#include <iostream>

using namespace std;

string stringManipulation(string s)
{
    return s.substr(0,2) == "if" ? s : "if " + s;
}

int main()
{
    cout << stringManipulation("if else") << endl;
    cout << stringManipulation("else") << endl;
    return 0;
}