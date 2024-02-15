/*
Write a C++ program to create a string with the last character added at the front and back of a given string of length 1 or more
Sample Input:
"Red"
"Green"
"1"
Sample Output:
dRedd
nGreenn
111
*/

#include <iostream>

using namespace std;

string createNewString(string s)
{
    char lastCharacter = s.back();

    return lastCharacter + s + lastCharacter;
}

int main()
{
    cout << createNewString("Red") << endl;
    cout << createNewString("Green") << endl;
    cout << createNewString("1") << endl;

    return 0;
}