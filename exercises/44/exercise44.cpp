/*
Write a C++ program to check if it is possible to add two integers to get the third integer from three given integers.
Sample Input:
1, 2, 3
4, 5, 6
-1, 1, 0
Sample Output:
1
0
1
*/

#include <iostream>

using namespace std;

bool check(int a, int b, int c)
{
    return a + b == c;
}

int main()
{
    cout << check(1, 2, 3) << endl;
    cout << check(4, 5, 6) << endl;
    cout << check(-1, 1, 0) << endl;

    return 0;
}