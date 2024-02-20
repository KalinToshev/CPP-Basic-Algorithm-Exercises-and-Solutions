/*
Write a C++ program to check two integers and return the value nearest to 13 without crossing over. Return 0 if both numbers go over.
Sample Input:
4, 5
7, 12
10, 13
17, 33
Sample Output:
5
12
13
0
*/

#include <iostream>

using namespace std;

int check(int a, int b)
{
    if (a > 13 && b > 13)
    {
        return 0;
    }

    if (abs(a - 13) < abs(b - 13))
    {
        return a;
    }
    else if (abs(a - 13) > abs(b - 13))
    {
        return b;
    }
}

int main()
{
    cout << check(4, 5) << endl;
    cout << check(7, 12) << endl;
    cout << check(10, 13) << endl;
    cout << check(17, 33) << endl;

    return 0;
}