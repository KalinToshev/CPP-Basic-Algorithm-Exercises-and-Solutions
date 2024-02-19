/*
Write a C++ program to check if y is greater than x, and z is greater than y from three given integers x,y,z.
Sample Input:
1, 2, 3
4, 5, 6
-1, 1, 0
Sample Output:
1
1
0
*/

#include <iostream>

using namespace std;

bool isGreater(int x, int y, int z)
{
    return y > x && z > y;
}

int main()
{
    cout << isGreater(1, 2, 3) << endl;
    cout << isGreater(4, 5, 6) << endl;
    cout << isGreater(-1, 1, 0) << endl;

    return 0;
}