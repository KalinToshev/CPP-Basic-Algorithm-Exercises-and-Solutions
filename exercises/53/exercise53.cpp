/*
Write a C++ program to compute the sum of the three integers. If one of the values is 13 then do not count it and its right towards the sum.
Sample Input:
4, 5, 7
7, 4, 12
10, 13, 12
13, 12, 18
Sample Output:
16
23
10
0
*/

#include <iostream>

using namespace std;

int sum(int a, int b, int c)
{
    //Check if one of the values is 13
    if (a == 13 || b == 13 || c == 13)
    {
        if (a == 13)
            return 0;
        else if (b == 13)
            return a;
        else if (c == 13)
            return a + b;
    }

    //If none of the values are 13
    return a + b + c;
}

int main()
{
    cout << sum(4, 5, 7) << endl;
    cout << sum(7, 4, 12) << endl;
    cout << sum(10, 13, 12) << endl;
    cout << sum(13, 12, 18) << endl;

    return 0;
}