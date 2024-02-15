/*
Write a C++ program to remove the character at a given position in the string. The given position will be in the range 0..string length -1 inclusive.
Sample Input:
"Python", 1
"Python", o
"Python", 4
Sample Output:
Pthon
ython
Pythn
*/

#include <iostream>

using namespace std;

string removeCharacterFromGivenPosition(string s, size_t index)
{
    if (index < s.size())
    {
        return s.erase(index, 1);
    }
}

int main()
{
    cout << removeCharacterFromGivenPosition("Python", 1) << endl;
    cout << removeCharacterFromGivenPosition("Python", 0) << endl;
    cout << removeCharacterFromGivenPosition("Python", 4) << endl;
    return 0;
}