/*
Write a C++ program to check a given array of integers of length 1 or more and return true if 10 appears as either first or last element in the given array.
Sample Input:
{ 10, 20, 40, 50 }
{ 5, 20, 40, 10 }
{ 10, 20, 40, 10 }
{ 12, 24, 35, 55 }
Sample Output:
1
1
1
0
*/

#include <iostream>

using namespace std;

const int SIZE = 4;

bool check_if(int arr[], int size)
{
    if (arr[0] == 10 || arr[size - 1] == 10)
        return true;
    else 
        return false;
}

int main()
{
    int arr1[] = {10, 20, 40, 50};
    int arr2[] = {5, 20, 40, 10};
    int arr3[] = {10, 20, 40, 10};
    int arr4[] = {12, 24, 35, 55};

    cout << check_if(arr1, SIZE) << endl;
    cout << check_if(arr2, SIZE) << endl;
    cout << check_if(arr3, SIZE) << endl;
    cout << check_if(arr4, SIZE) << endl;

    return 0;
}