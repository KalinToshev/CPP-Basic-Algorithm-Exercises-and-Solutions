/*
Write a C++ program that takes at least 3 characters from the middle of a given string that would be used to create a string.
Sample Input:
"Hello"
"Python"
"abc"
Sample Output:
ell
yth
abc
*/

#include <iostream>

using namespace std;

string create_string(string str)
{
    //Check if the length of the string is less than 3
    if (str.length() <= 3)
    {
        return str;
    }

    //Create a new string
    string newString = "";

    //Find the middle of the string
    int middleIndex = (str.length() / 2) - 1;

    //Save the indexes behind and in front of the middle
    int behindIndex = middleIndex - 1;
    int inFrontIndex = middleIndex + 1;

    //Add the indexes behind and in front of the middle
    newString += str[behindIndex];
    newString += str[middleIndex];
    newString += str[inFrontIndex];

    //Return the new string
    return newString;
}

int main()
{
    cout << create_string("Hello") << endl;
    cout << create_string("Python") << endl;
    cout << create_string("abc") << endl;

    return 0;
}