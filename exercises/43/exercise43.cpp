/*
Write a C++ program to check whether a given string begins with "F" or ends with "B". If the string starts with "F" return "Fizz" and return "Buzz" if it finishes with "B". If the string starts with "F" and ends with "B" return "FizzBuzz". In other cases return the original string.
Sample Input:
"FB"
"Fsafs"
"AuzzB"
"founder"
Sample Output:
FizzBuzz
Fizz
Buzz
founder
*/

#include <iostream>

using namespace std;

/**
 * Checks the input string and returns "FizzBuzz" if the string starts with 'F' and ends with 'B', "Fizz" if the string starts with 'F', "Buzz" if the string ends with 'B', and the input string otherwise.
 *
 * @param s the input string to be checked
 *
 * @return the result string based on the conditions
 *
 * @throws None
 */
string checkFizzBuzz(string s)
{
    if (s[0] == 'F' && s[s.length() - 1] == 'B')
        return "FizzBuzz";
    else if (s[0] == 'F')
        return "Fizz";
    else if (s[s.length() - 1] == 'B')
        return "Buzz";
    else
        return s;
}

int main()
{
    cout << checkFizzBuzz("FB") << endl;
    cout << checkFizzBuzz("Fsafs") << endl;
    cout << checkFizzBuzz("AuzzB") << endl;
    cout << checkFizzBuzz("founder") << endl;

    return 0;
}