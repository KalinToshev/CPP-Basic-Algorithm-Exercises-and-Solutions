/*
Write a C++ program to compute the sum of three given integers. Return the third value if the two values are the same.
Sample Input:
4, 5, 7
7, 4, 12
10, 10, 12
12, 12, 18
Sample Output:
16
23
12
18
*/

#include <iostream>

using namespace std;

int sum(int a, int b, int c)
{
    if (a == b)
    {
        return c;
    }

    return a + b + c;
}

int main()
{
    cout << sum(4, 5, 7) << endl;
    cout << sum(7, 4, 12) << endl;
    cout << sum(10, 10, 12) << endl;
    cout << sum(12, 12, 18) << endl;

    return 0;
}