/*
Write a C++ program to check if three given numbers are in strict increasing order. For example, 4, 7, 15, or 45, 56, 67, but not 4 ,5, 8 or 6, 6, 8. However, if a fourth parameter is true, equality is allowed, such as 6, 6, 8 or 7, 7, 7.
Sample Input:
1, 2, 3, false
1, 2, 3, true
10, 2, 30, false
10, 10, 30, true
Sample Output:
1
1
0
1
*/

#include <iostream>

using namespace std;

/**
 * Checks if the integers are in strict increasing order.
 *
 * @param a the first integer
 * @param b the second integer
 * @param c the third integer
 * @param equality indicates whether to use inclusive comparison
 *
 * @return true if the condition is satisfied, false otherwise
 *
 * @throws None
 */
bool check(int a, int b, int c, bool equality)
{
    if (equality)
    {
        return a <= b && b <= c;
    }

    return a < b && b < c;
}

int main()
{
    cout << check(1, 2, 3, false) << endl;
    cout << check(1, 2, 3, true) << endl;
    cout << check(10, 2, 30, false) << endl;
    cout << check(10, 10, 30, true) << endl;

    return 0;
}