/*
Write a C++ program to check if a given number is within 2 of a multiple of 10.
Sample Input:
3
7
8
21
Sample Output:
0
0
1
1
*/

#include <iostream>

using namespace std;

bool isMultipleOfTen(int number)
{
    return number % 10 <= 2 || number % 10 >= 8;
}

int main()
{
    cout << isMultipleOfTen(3) << endl;
    cout << isMultipleOfTen(7) << endl;
    cout << isMultipleOfTen(8) << endl;
    cout << isMultipleOfTen(21) << endl;

    return 0;
}