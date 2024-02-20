/*
Write a C++ program to check whether the first two characters and the last two characters of a given string are the same.
Sample Input:
"abab"
"abcdef"
"xyzsderxy"
Sample Output:
1
0
1
*/

#include<iostream>
#include<string>

using namespace std;

bool checkCharacters(const string& str) 
{
    int n = str.length();
    return n >= 2 && (str.front() == str[n - 2] && str[1] == str.back());
}

int main() 
{
    cout << checkCharacters("abab") << endl;
    cout << checkCharacters("abcdef") << endl;
    cout << checkCharacters("xyzsderxy") << endl;

    return 0;
}
