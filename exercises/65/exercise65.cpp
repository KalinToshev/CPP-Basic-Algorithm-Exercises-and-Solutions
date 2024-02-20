/*
Write a C++ program to move the first two characters to the end of a given string of length at least two.
Sample Input:
"Hello"
"JS"
Sample Output:
lloHe
JS
*/

#include <iostream>

using namespace std;

string moveFirstTwoCharsToEnd(string str)
{
    if (str.length() < 2)
    {
        return str;
    }

    return str.substr(2) + str.substr(0, 2);
}

int main()
{
    cout << moveFirstTwoCharsToEnd("Hello") << endl;
    cout << moveFirstTwoCharsToEnd("JS") << endl;

    return 0;
}