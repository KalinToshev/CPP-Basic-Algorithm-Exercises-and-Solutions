/*
Write a C++ program to check three given integers (small, medium and large) and return true if the difference between small and medium and the difference between medium and large is same.
Sample Input:
4, 5, 6
7, 12, 13
-1, 0, 1
Sample Output:
1
0
1
*/

#include <iostream>

using namespace std;

bool check(int a, int b, int c)
{
    if (abs(a - b) == abs(b - c))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << check(4, 5, 6) << endl;
    cout << check(7, 12, 13) << endl;
    cout << check(-1, 0, 1) << endl;

    return 0;
}