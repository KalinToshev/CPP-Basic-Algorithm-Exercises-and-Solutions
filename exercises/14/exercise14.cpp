/*
Write a C++ program to check two given integers whether either of them is in the range 100..200 inclusive.
Sample Input:
100, 199
250, 300
105, 190
Sample Output:
1
0
1
*/

#include <iostream>

using namespace std;

bool checkTwoIntegers(int n1, int n2)
{
    return (n1 >= 100 && n1 <= 200) || (n2 >= 100 && n2 <= 200);
}

int main()
{
    cout << checkTwoIntegers(100, 199) << endl;
    cout << checkTwoIntegers(250, 300) << endl;
    cout << checkTwoIntegers(105, 190) << endl;

    return 0;
}