/*
Write a C++ program to check which number is closest to the value 100 among two given integers. Return 0 if the two numbers are equal.
Sample Input:
78, 95
95, 95
99, 70
Sample Output:
95
0
99
*/

#include <iostream>

using namespace std;

int check_which_number_is_closest_to_100(int n1, int n2)
{
    if (n1 == n2)
        return 0;
    
    if (n1 < n2)
        return n2;

    return n1;
}

int main()
{
    cout << check_which_number_is_closest_to_100(78, 95) << endl;
    cout << check_which_number_is_closest_to_100(95, 95) << endl;
    cout << check_which_number_is_closest_to_100(99, 70) << endl;

    return 0;
}