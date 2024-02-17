/*
Write a C++ program to find the larger value from two positive integer values that is in the range 20..30 inclusive. Also, return 0 if neither is in that range.
Sample Input:
78, 95
20, 30
21, 25
28, 28
Sample Output:
0
30
25
28
*/

#include <iostream>

using namespace std;

int compare_values_and_return_larger_in_range_20_to_30(int n1, int n2)
{
    if (n1 >= 20 && n1 <= 30 && n2 >= 20 && n2 <= 30)
    {
        if (n1 >= n2)
        {
            return n1;
        }
        else
        {
            return n2;
        }
    }
    else if (n1 >= 20 && n2 <= 30)
    {
        return n1;
    }
    else if (n2 >= 20 && n2 <= 30)
    {
        return n2;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout << compare_values_and_return_larger_in_range_20_to_30(78, 95) << endl;
    cout << compare_values_and_return_larger_in_range_20_to_30(20, 30) << endl;
    cout << compare_values_and_return_larger_in_range_20_to_30(21, 25) << endl;
    cout << compare_values_and_return_larger_in_range_20_to_30(28, 28) << endl; 

    return 0;
}