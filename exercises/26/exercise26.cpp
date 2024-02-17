/*
Write a C++ program to count the string "aa" in a given string and assume "aaa" contains two "aa".
Sample Input:
"bbaaccaag"
"jjkiaaasew"
"JSaaakoiaa"
Sample Output:
2
2
3
*/

#include <iostream>

using namespace std;

int count_AAs(string str)
{
    int counter = 0;

    for (int i = 0; i < str.length() - 1; i++)
        if(str.substr(i, 2) == "aa")
            counter++;

    return counter;
    
}

int main()
{
    cout << count_AAs("bbaaccaag") << endl;
    cout << count_AAs("jjkiaaasew") << endl;
    cout << count_AAs("JSaaakoiaa") << endl;
    return 0;
}