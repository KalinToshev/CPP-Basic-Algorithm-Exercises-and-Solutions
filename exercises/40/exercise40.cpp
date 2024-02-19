/*
Write a C++ program to check if a given number that is not negative is a multiple of 3 or 7, but not both.
Sample Input:
3
7
21
Sample Output:
1
1
0
*/

#include <iostream>

using namespace std;

bool isMultiple(int num)
{
    if (num < 0)
    {
        cout << "Please enter a number that is not negative." << endl;
        return false;
    }

    if (num % 3 == 0 && num % 7 == 0)
    {
        return false;
    }

    if (num % 3 == 0 || num % 7 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << isMultiple(3) << endl;
    cout << isMultiple(7) << endl;
    cout << isMultiple(21) << endl;

    return 0;
}