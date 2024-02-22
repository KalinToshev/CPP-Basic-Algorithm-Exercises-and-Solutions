/*
Write a C++ program to check a given array of integers of length 1 or more. The program will return true if the first element and the last element are equal in the given array.
Sample Input:
{ 10, 20, 40, 50 }
{ 10, 20, 40, 10 }
{ 12, 24, 35, 55 }
Sample Output:
0
1
0
*/

#include <iostream>

using namespace std;

const int SIZE = 4;

bool check_if_first_and_last_values_are_equal(int arr[], int size)
{
    return arr[0] == arr[size - 1];
}

int main()
{
    int arr1[] = {10, 20, 40, 50};
    int arr2[] = {10, 20, 40, 10};
    int arr3[] = {12, 24, 35, 55};

    cout << check_if_first_and_last_values_are_equal(arr1, SIZE) << endl;
    cout << check_if_first_and_last_values_are_equal(arr2, SIZE) << endl;
    cout << check_if_first_and_last_values_are_equal(arr3, SIZE) << endl;

    return 0;
}