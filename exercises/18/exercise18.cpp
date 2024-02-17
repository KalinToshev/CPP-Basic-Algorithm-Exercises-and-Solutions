/*
Write a C++ program to check the largest number among three given integers.
Sample Input:
1,2,3
1,3,2
1,1,1
1,2,2
Sample Output:
3
3
1
2
*/

#include <iostream>

using namespace std;

int get_largest_number_among_three(int n1, int n2, int n3)
{
    int max = n1;

    if (n2 > max)
        max = n2;
    
    if (n3 > max)
        max = n3;
    
    return max;
}

int main()
{
    cout << get_largest_number_among_three(1,2,3) << endl;
    cout << get_largest_number_among_three(1,3,2) << endl;
    cout << get_largest_number_among_three(1,1,1) << endl;
    cout << get_largest_number_among_three(1,2,2) << endl;

    return 0;
}