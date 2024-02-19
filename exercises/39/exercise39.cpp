/*
Write a C++ program to test if a given non-negative number is a multiple of 13 or it is one more than a multiple of 13.
Sample Input:
13
14
27
41
Sample Output:
1
1
1
0
*/

#include <iostream>

using namespace std;

bool isMultipleOf13(int number)
{
    if (number % 13 == 0 || (number - 1) % 13 == 0)
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
    cout << isMultipleOf13(13) << endl;
    cout << isMultipleOf13(14) << endl;
    cout << isMultipleOf13(27) << endl;
    cout << isMultipleOf13(41) << endl;
    
    return 0;
}