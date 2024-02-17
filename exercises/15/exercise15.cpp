/*
Write a C++ program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the range, otherwise false.
Sample Input:
11, 20, 12
30, 30, 17
25, 35, 50
15, 12, 8
Sample Output:
1
1
1
0
*/

#include <iostream>

using namespace std;

bool checkIfIntegersAreInRange(int n1, int n2, int n3)
{
    return (n1 >= 20 && n1 <= 50) || (n2 >= 20 && n2 <= 50) || (n3 >= 20 && n3 <= 50);
}

int main()
{
    cout << checkIfIntegersAreInRange(11, 20, 12) << endl;
    cout << checkIfIntegersAreInRange(30, 30, 17) << endl;
    cout << checkIfIntegersAreInRange(25, 35, 50) << endl;
    cout << checkIfIntegersAreInRange(15, 12, 8) << endl;

    return 0;
}