/*
Write a C++ program to check two given arrays of integers of length 1 or more. This will return true if they have the same first element or if they have the same last element.
Sample Input:
{ 10, 20, 40, 50 }, { 10, 20, 40, 50 }
{ 10, 20, 40, 50 }, { 10, 20, 40, 5 }
{ 10, 20, 40, 50 }, { 1, 20, 40, 5 }
Sample Output:
1
1
0
*/

#include <iostream>

using namespace std;

const int SIZE = 4;

bool check(int arr1[], int arr2[])
{
    return arr1[0] == arr2[0] || arr1[SIZE - 1] == arr2[SIZE - 1];
}

int main()
{
    int arr1[] = {10, 20, 40, 50};
    int arr2[] = {10, 20, 40, 5};
    int arr3[] = {1, 20, 40, 5};

    cout << check(arr1, arr1) << endl;
    cout << check(arr1, arr2) << endl;
    cout << check(arr1, arr3) << endl;

    return 0;
}