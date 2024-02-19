/*
Write a C++ program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30.
Sample Input:
12, 17
2, 17
22, 17
20, 0
Sample Output:
29
30
39
30
*/

#include <iostream>

using namespace std;

int sum(int a, int b)
{
    if (a + b >= 10 && a + b <= 20)
    {
        return 30;
    }
    else
    {
        return a + b;
    }
}

int main()
{
    cout << sum(12, 17) << endl;
    cout << sum(2, 17) << endl;
    cout << sum(22, 17) << endl;
    cout << sum(20, 0) << endl;

    return 0;
}