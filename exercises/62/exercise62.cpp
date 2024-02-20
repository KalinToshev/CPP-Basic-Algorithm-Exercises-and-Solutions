/*
Write a C++ program to create a new string without the first and last characters of a given string of length at least two.
Sample Input:
"Hello"
"Hi"
"Python"
Sample Output:
ell
ytho
*/

#include <iostream>

using namespace std;

string create_string_without_first_and_last_characters(string str)
{
    //Check if the string has at least two characters
    if (str.length() >= 2) 
    {
        //String has at least two characters -> return the string without the first and last characters
        return str.substr(1, str.length() - 2);
    } 
    else
    {
        //String has only one character
        return "";
    }
}

int main()
{
    cout << create_string_without_first_and_last_characters("Hello") << endl;
    cout << create_string_without_first_and_last_characters("Hi") << endl;
    cout << create_string_without_first_and_last_characters("Python") << endl;

    return 0;
}