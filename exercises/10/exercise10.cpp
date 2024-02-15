/*
Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7.
Sample Input
3
14
12
37
Sample Output:
1
1
1
0
*/

#include <iostream>>

using namespace std;

bool checkIfNumIsMultipleOf3Or7(int n)
{
    return n % 3 == 0 || n % 7 == 0;
}

int main()
{
    cout << checkIfNumIsMultipleOf3Or7(3) << endl;
    cout << checkIfNumIsMultipleOf3Or7(14) << endl;
    cout << checkIfNumIsMultipleOf3Or7(12) << endl;
    cout << checkIfNumIsMultipleOf3Or7(37) << endl;

    return 0;
}