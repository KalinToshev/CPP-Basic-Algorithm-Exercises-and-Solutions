/*
Write a C++ program to check if a triple is present in an array of integers or not. If a value appears three times in a row in an array it is called a triple.
Sample Input:
{ 1, 1, 2, 2, 1 }
{ 1, 1, 2, 1, 2, 3 }
{ 1, 1, 1, 2, 2, 2, 1 }
Sample Output:
0
0
1
*/

#include <iostream>

using namespace std;

bool isTriple(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2])
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int arr1[] = {1, 1, 2, 2, 1};
    int length1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {1, 1, 2, 1, 2, 3};
    int length2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {1, 1, 1, 2, 2, 2, 1};
    int length3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << isTriple(arr1, length1) << endl;
    cout << isTriple(arr2, length2) << endl;
    cout << isTriple(arr3, length3) << endl;

    return 0;
}