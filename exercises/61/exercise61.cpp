/*
Write a C++ program to create the string of the first half of a given string of even length.
Sample Input:
"Hello"
"Hi"
Sample Output:
He
H
*/

#include <iostream>

using namespace std;

string create_string_of_the_first_half_of_a_given_string(string str)
{
    //Check if the given string is even
    if (str.length() % 2 == 0)
    {
        //Return the first half of the given string
        return str.substr(0, str.length() / 2);
    }
    else 
    {
        return "The given string is not even! Please enter an even length string!";
    }
}

int main()
{
    cout << create_string_of_the_first_half_of_a_given_string("Hello") << endl;
    cout << create_string_of_the_first_half_of_a_given_string("Hi") << endl;

    return 0;
}