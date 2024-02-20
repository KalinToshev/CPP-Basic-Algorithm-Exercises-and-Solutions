/*
Write a C++ program to create another string using two given strings s1, s2, the format of the new string will be s1s2s2s1.
Sample Input:
"Hi", "Hello"
"whats", "app"
Sample Output:
HiHelloHelloHi
whatsappappwhats
*/

#include <iostream>

using namespace std;

string create_string(string s1, string s2)
{
    return s1 + s2 + s2 + s1;
}

int main()
{
    cout << create_string("Hi", "Hello") << endl;
    cout << create_string("whats", "app") << endl;

    return 0;
}