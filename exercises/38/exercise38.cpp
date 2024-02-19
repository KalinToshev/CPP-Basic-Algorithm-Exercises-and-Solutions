/*
Write a C++ program that accepts two integers and returns true if either one is 5 or their sum or difference is 5.
Sample Input:
5, 4
4, 3
1, 4
Sample Output:
1
0
1
*/

#include <iostream>

using namespace std;

bool check(int a, int b)
{
    if (a == 5 || b == 5 || a + b == 5 || a - b == 5)
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
    cout << check(5, 4) << endl;
    cout << check(4, 3) << endl;
    cout << check(1, 4) << endl;

    return 0;
}