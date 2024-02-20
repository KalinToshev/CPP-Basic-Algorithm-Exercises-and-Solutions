/*
Write a C++ program to compute the sum of two given non-negative integers x and y as long as the sum has the same number of digits as x. If the sum has more digits than x, return x without y.
Sample Input:
4, 5
7, 4
10, 10
Sample Output:
9
7
20
*/

#include <iostream>

using namespace std;

int findSum(int x, int y)
{
    int sum = x + y;
    
    //Find the digits count of the sum
    int sumDigitsCount = 0;
    int tempSum = sum;
    while (tempSum != 0) 
    {
        tempSum /= 10;
        sumDigitsCount++;
    }

    //Find the digits count of x
    int xDigitsCount = 0;
    int tempX = x;
    while (tempX != 0) 
    {
        tempX /= 10;
        xDigitsCount++;
    }

    if (sumDigitsCount == xDigitsCount)
        return sum;

    return x;
}

int main()
{
    cout << findSum(4, 5) << endl;
    cout << findSum(7, 4) << endl;
    cout << findSum(10, 10) << endl;

    return 0;
}