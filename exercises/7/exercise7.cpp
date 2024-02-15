/*
Write a C++ program to exchange the first and last characters in a given string and return the result string.
Sample Input:
"abcd"
"a"
"xy"
Sample output:
dbca
a
yx
*/

#include <iostream>

using namespace std;

void changeFirstAndLastChar(string &s)
{
    if (s.length() < 2)
    {
        cout << s << endl;
        return;
    }

    //Swap the first and last characters
    char temp = s.at(0);
    s.at(0) = s.at(s.length() - 1);
    s.at(s.length() - 1) = temp;

    cout << s << endl;
}

int main()
{
    string s1 = "abcd";
    string s2 = "a";
    string s3 = "xy";

    changeFirstAndLastChar(s1);
    changeFirstAndLastChar(s2);
    changeFirstAndLastChar(s3);

    return 0;
}