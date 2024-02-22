/*
Write a C++ program to determine whether a given array of integers of length 2 contains 15 or 20.
Sample Input:
{ 12, 20 }
{ 14, 15 }
{ 11, 21 }
Sample Output:
1
1
0
*/

#include <iostream>

using namespace std;

bool check(int arr[], int length)
{
    //Check if the array contains 15 or 20
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == 15 || arr[i] == 20)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr1[] = {12, 20};
    int length1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {14, 15};
    int length2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {11, 21};
    int length3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << check(arr1, length1) << endl;
    cout << check(arr2, length2) << endl;
    cout << check(arr3, length3) << endl;

    return 0;
}