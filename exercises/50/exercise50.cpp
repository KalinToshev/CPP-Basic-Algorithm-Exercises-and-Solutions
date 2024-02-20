/*
Write a C++ program to check two given integers. Each integer is in the range 10..99. Return true if a digit appears in both numbers, such as the 3 in 13 and 33.
Sample Input:
11, 21
11, 20
10, 10
Sample Output:
1
0
1
*/

#include <iostream>

using namespace std;

bool check(int a, int b)
{
    return a / 10 == b / 10 || a / 10 == b % 10 || a % 10 == b / 10 || a % 10 == b % 10;
}

int main()
{
    cout << check(11, 21) << endl;
    cout << check(11, 20) << endl;
    cout << check(10, 10) << endl;

    return 0;
}