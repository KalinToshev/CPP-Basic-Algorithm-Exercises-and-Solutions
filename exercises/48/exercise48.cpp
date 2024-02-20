/*
Write a C++ program to check three given integers and return true if one of them is 20 lower than one of the others.
Sample Input:
11, 21, 31
11, 22, 31
10, 20, 15
Sample Output:
1
1
0
*/

#include <iostream>

using namespace std;

//Function to check three given integers and return true if one of them is 20 lower than one of the others
bool check(int a, int b, int c)
{
    return abs(a - b) >= 20 || abs(a - c) >= 20 || abs(b - c) >= 20;
}

int main()
{
    cout << check(11, 21, 31) << endl;
    cout << check(11, 22, 31) << endl;
    cout << check(10, 20, 15) << endl;

    return 0;
}