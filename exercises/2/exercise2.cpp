/*
Write a C++ program to find the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.
Sample Input:
53
30
51
Sample Output:
6
21
0
*/

#include <iostream>

using namespace std;

int findAbsoluteDifference(int n)
{
    //Calculate the absolute difference between n and 51
    int difference = abs(n - 51);

    //Use the ternary operator to return triple the absolute difference if n is greater than 51
    return n > 51 ? 3 * difference : difference;
}


int main()
{
    cout << findAbsoluteDifference(53) << endl;
    cout << findAbsoluteDifference(30) << endl;
    cout << findAbsoluteDifference(51) << endl;

    return 0;
}