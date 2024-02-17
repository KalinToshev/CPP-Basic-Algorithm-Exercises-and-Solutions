/*
Write a C++ program to check if the first appearance of "a" in a given string is immediately followed by another "a".
Sample Input:
"caabb"
"babaaba"
"aaaaa"
Sample Output:
1
0
1
*/

#include <iostream>

using namespace std;

bool check_first_AA(string str)
{
    int counter = 0;

    for (int i = 0; i < str.length() -1; i++)
    {
        if (str[i] == 'a')
            counter++;

        if (str.substr(i, 2) == "aa" && counter < 2)
            return true;
    }
    
    return false;
}

int main()
{
    cout << check_first_AA("caabb") << endl;
    cout << check_first_AA("babaaba") << endl;
    cout << check_first_AA("aaaaa") << endl;

    return 0;
}