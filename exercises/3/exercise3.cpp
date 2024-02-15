/*
Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30.
Sample Input:
30, 0
25, 5
20, 30
20, 25
Sample Output:
1
1
1
0
*/

#include <iostream>

using namespace std;

bool checkTwoIntegers(int n1, int n2)
{
    return n1 == 30 || n2 == 30 || (n1 + n2 == 30);
}

int main()
{
    cout << checkTwoIntegers(30, 0) << endl;
    cout << checkTwoIntegers(25, 5) << endl;
    cout << checkTwoIntegers(20, 30) << endl;
    cout << checkTwoIntegers(20, 25) << endl;
    return 0;
}