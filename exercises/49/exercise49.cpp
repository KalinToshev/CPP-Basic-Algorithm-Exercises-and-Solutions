/*
Write a C++ program to find the larger of two given integers. However if the two integers have the same remainder when divided by 7, then return the smaller integer. If the two integers are the same, return 0.
Sample Input:
11, 21
11, 20
10, 10
Sample Output:
21
20
0
*/

#include <iostream>

using namespace std;

int findLarger(int a, int b)
{
    if (a == b)
    {
        return 0;
    }
    else if ((a % 7 == b % 7 && a < b) || a > b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}

int main()
{
    cout << findLarger(11, 21) << endl;
    cout << findLarger(11, 20) << endl;
    cout << findLarger(10, 10) << endl;

    return 0;
}