/*
Write a C++ program to check whether two given integer values are in the range 20..50 inclusive. Return true if 1 or other is in the range, otherwise false.
Sample Input:
20, 84
14, 50
11, 45
25, 40
Sample Output:
1
1
1
0
*/

#include <iostream>

using namespace std;

bool checkIfOneOrOtherIntegerIsInRange(int n1, int n2)
{
    return (n1 <= 20 || n2 >= 50) || (n2 <= 20 || n1 >= 50);
}

int main()
{
    cout << checkIfOneOrOtherIntegerIsInRange(20, 84) << endl;
    cout << checkIfOneOrOtherIntegerIsInRange(14, 50) << endl;
    cout << checkIfOneOrOtherIntegerIsInRange(11, 45) << endl;
    cout << checkIfOneOrOtherIntegerIsInRange(25, 40) << endl;

    return 0;
}