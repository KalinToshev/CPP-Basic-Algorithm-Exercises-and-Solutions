/*
Write a C++ program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere.
Sample Input:
{1,1,2,3,1}
{1,1,2,4,1}
{1,1,2,1,2,3}
Sample Output:
1
0
1
*/

#include <iostream>

using namespace std;

/**
 * Check if the sequence 1, 2, 3 appears in the given array.
 *
 * @param arr the array to be checked
 * @param length the length of the array
 *
 * @return true if the sequence 1, 2, 3 appears, false otherwise
 *
 * @throws None
 */
bool checkSequence(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == 1 && arr[i + 1] == 2 && arr[i + 2] == 3)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr1[] = {1, 1, 2, 3, 1};
    int arr2[] = {1, 1, 2, 4, 1};
    int arr3[] = {1, 1, 2, 1, 2, 3};

    int arr1_length = sizeof(arr1) / sizeof(arr1[0]);
    int arr2_length = sizeof(arr2) / sizeof(arr2[0]);
    int arr3_length = sizeof(arr3) / sizeof(arr3[0]);

    cout << checkSequence(arr1, arr1_length) << endl;
    cout << checkSequence(arr2, arr2_length) << endl;
    cout << checkSequence(arr3, arr3_length) << endl;

    return 0;
}