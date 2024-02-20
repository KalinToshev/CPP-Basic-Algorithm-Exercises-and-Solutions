/*
Write a C++ program to compute the sum of the three given integers. Except for 13 and 17, any value in the range 10..20 inclusive counts as 0.
Sample Input:
4, 5, 7
7, 4, 12
10, 13, 12
17, 12, 18
Sample Output:
16
11
13
17
*/

#include <iostream>

using namespace std;

int sum(int a, int b, int c)
{
    if (a >= 10 && a <= 20)
        if (a != 13 && a != 17)
            a = 0;

    if (b >= 10 && b <= 20)
        if (b != 13 && b != 17)
            b = 0;

    if (c >= 10 && c <= 20)
        if (c != 13 && c != 17)
            c = 0;

    return a + b + c;
}

int main()
{
    cout << sum(4, 5, 7) << endl;
    cout << sum(7, 4, 12) << endl;
    cout << sum(10, 13, 12) << endl;
    cout << sum(17, 12, 18) << endl;

    return 0;
}