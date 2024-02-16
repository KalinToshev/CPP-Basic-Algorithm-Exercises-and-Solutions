/*
Write a C++ program to check if one given temperature is less than 0 and the other is greater than 100.
Sample Input:
120, -1
-1, 120
2, 120
Sample Output:
1
1
0
*/

#include <iostream>

using namespace std;

bool checkTemperature(int temp1, int temp2)
{
    return temp1 < 0 && temp2 > 100 || temp2 < 0 && temp1 > 100;
}

int main()
{
    cout << checkTemperature(120, -1) << endl;
    cout << checkTemperature(-1, 120) << endl;
    cout << checkTemperature(2, 120) << endl;

    return 0;
}