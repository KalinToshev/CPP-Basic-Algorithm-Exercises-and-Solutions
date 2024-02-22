/*
Write a C++ program to create a new string from a given string. If the first or first two characters are 'a', return the string without those 'a' characters, otherwise return the original string.
Sample Input:
"abcab"
"python"
"aacda"
"jython"
Sample Output:
bcab
python
cda
jython
*/

#include <iostream>
#include <string>

using namespace std;

string removeA(string str) 
{
    if(str.length() >= 1 && str[0] == 'a') 
    {
        //Remove the first character if it's 'a'
        str.erase(0, 1); 
    }

    if(str.length() >= 1 && str[0] == 'a') 
    {
        //Check again in case the second character was 'a'
        str.erase(0, 1); 
    }

    return str;
}

int main() 
{
    cout << removeA("abcab") << endl;
    cout << removeA("python") << endl;  
    cout << removeA("aacda") << endl;
    cout << removeA("jython") << endl;

    return 0;
}
