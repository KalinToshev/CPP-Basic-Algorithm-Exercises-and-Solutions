/*
Write a C++ program to compute the sum of two given integer values. If the two values are the same, then return triple their sum.
Sample Input
1, 2
3, 2
2, 2
Sample Output:
3
5
12
*/

#include <iostream>

using namespace std;

int calc(int num1, int num2)
{
    return num1 == num2 ? (num1 + num2) * 3 : num1 + num2;
}

int main()
{
    cout << calc(1, 2) << endl;
    cout << calc(3, 2) << endl;
    cout << calc(2, 2) << endl;
    return 0;
}