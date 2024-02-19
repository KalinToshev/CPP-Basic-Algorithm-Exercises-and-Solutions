/*
Write a C++ program to compute the sum of the two given integers. Return 18 if one of the given integer values is in the range 10..20 inclusive.
Sample Input:
3, 7
10, 11
10, 20
21, 220
Sample Output:
10
18
18
241
*/

#include <iostream>

using namespace std;

int sum(int a, int b)
{
    if (a >= 10 && a <= 20 || b >= 10 && b <= 20)
    {
        return 18;
    }
    else
    {
        return a + b;
    }
}

int main()
{
    cout << sum(3, 7) << endl;
    cout << sum(10, 11) << endl;
    cout << sum(10, 20) << endl;
    cout << sum(21, 220) << endl;

    return 0;
}