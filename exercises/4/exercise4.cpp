/*
Write a C++ program to check a given integer and return true if it is within 10 of 100 or 200.
Sample Input:
103
90
89
Sample Output:
1
1
0
*/

#include <iostream>

using namespace std;

bool calc(int n)
{
    if (abs(n - 100) <= 10 || abs(n - 200) <= 10)
        return true;

    return false;
}

int main()
{
    cout << calc(103) << endl;
    cout << calc(90) << endl;
    cout << calc(89) << endl;
    return 0;
}