/*
Write a C++ program to create a new string from a given string after swapping the last two characters.
Sample Input:
"Hello"
"Python"
"PHP"
"JS"
"C"
Sample Output:
Helol
Pythno
PPH
SJ
C
*/

#include<iostream>
#include<string>

using namespace std;

string swapLastTwo(string str) 
{
    int n = str.length();
    if (n > 1) {
        swap(str[n - 1], str[n - 2]);
    }
    return str;
}

int main() 
{
    cout << swapLastTwo("Hello") << endl;
    cout << swapLastTwo("Python") << endl;
    cout << swapLastTwo("PHP") << endl;
    cout << swapLastTwo("JS") << endl;
    cout << swapLastTwo("C") << endl;
    
    return 0;
}
