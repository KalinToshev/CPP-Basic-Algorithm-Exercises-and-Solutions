/*
Write a C++ program to count the number of times a substring of length 2 appears in a given string as well as its last two characters. Do not count the end substring.
Sample Input:
"abcdsab"
"abcdabab"
"abcabdabab"
"abcabd"
Sample Output:
1
2
3
0
*/

#include <iostream>

using namespace std;

int count_substrings_with_last_two_chars(string str)
{
    string last_two_char = str.substr(str.length() - 2);
    int counter = 0;

    for (int i = 0; i < str.length() - 2; i++)
        if (str.substr(i, 2) == (last_two_char))
            counter++;

    return counter;
}

int main()
{
    cout << count_substrings_with_last_two_chars("abcdsab") << endl; 
    cout << count_substrings_with_last_two_chars("abcdabab") << endl;
    cout << count_substrings_with_last_two_chars("abcabdabab") << endl;
    cout << count_substrings_with_last_two_chars("abcabd") << endl; 

    return 0;
}