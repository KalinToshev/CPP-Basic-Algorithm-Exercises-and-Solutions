/*
Write a C++ program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive.
Sample Input:
78, 95
25, 35
40, 50
55, 60
Sample Output:
0
0
1
1
*/

#include <iostream>

using namespace std;

bool checkIntegerRanges(int n1, int n2)
{
    return (n1 >= 40 && n1 <= 50 && n2 >= 40 && n2 <= 50) || (n1 >= 50 && n1 <= 60 && n2 >= 50 && n2 <= 60);
}

int main()
{
    cout << checkIntegerRanges(78, 95) << endl;
    cout << checkIntegerRanges(25, 35) << endl;
    cout << checkIntegerRanges(40, 50) << endl;
    cout << checkIntegerRanges(55, 60) << endl;

    return 0;
}