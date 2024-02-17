/*
Write a C++ program to check if two given non-negative integers have the same last digit.
Sample Input:
123, 456
12, 512
7, 87
12, 45
Sample Output:
0
1
1
0
*/

#include <iostream>

using namespace std;

bool check_if_last_digit_matches(int n1, int n2)
{
    return (n1 % 10) == (n2 % 10);
}

int main()
{
    cout << check_if_last_digit_matches(123, 456) << endl;
    cout << check_if_last_digit_matches(12, 512) << endl;
    cout << check_if_last_digit_matches(7, 87) << endl;
    cout << check_if_last_digit_matches(12, 45) << endl;

    return 0;
}