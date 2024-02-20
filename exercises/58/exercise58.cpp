/*
Write a C++ program to insert a given string into middle of the another given string of length 4.
Sample Input:
"[[]]","Hello"
"(())", "Hi"
Sample Output:
[[Hello]]
((Hi))
*/

#include <iostream>

using namespace std;

string insert_string(string s1, string s2)
{
    return s1.insert(2, s2);
}

int main()
{
    cout << insert_string("[[]]", "Hello") << endl;
    cout << insert_string("(())", "Hi") << endl;

    return 0;
}