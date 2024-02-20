/*
Write a C++ program to create a string taking the first character from a string and the last character from another given string. If the length of any given string is 0, use '#' as its missing character.
Sample Input:
"Hello", "Hi"
"Python", "PHP"
"JS", "JS"
"Csharp", ""
Sample Output:
Hi
PP
JS
C#
*/

#include<iostream>
#include<string>

using namespace std;

string createString(string str1, string str2) 
{
    char first = str1.empty() ? '#' : str1[0];
    char last = str2.empty() ? '#' : str2[str2.length() - 1];
    return string(1, first) + string(1, last);
}

int main() 
{
    cout << createString("Hello", "Hi") << endl;
    cout << createString("Python", "PHP") << endl;
    cout << createString("JS", "JS") << endl;
    cout << createString("Csharp", "") << endl;
    
    return 0;
}
