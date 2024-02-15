/*
Write a C++ program to check if a given string starts with 'C#' or not.
Sample Input:
"C++ Sharp"
"C#"
"C++"
Sample Output:
0
1
0
*/

#include <iostream>

using namespace std;

bool startsWith(string s)
{
    return s.substr(0, 2) == "C#";
}

int main()
{
    cout << startsWith("C++ Sharp") << endl;
    cout << startsWith("C#") << endl;
    cout << startsWith("C++") << endl;

    return 0;
}