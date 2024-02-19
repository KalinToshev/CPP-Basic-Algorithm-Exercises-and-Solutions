/*
Write a C++ program to count the number of 5's next to each other in an array of integers. Count the situation where the second 5 is actually a 6.
Sample Input:
{ 5, 5, 2 }
{ 5, 5, 2, 5, 5 }
{ 5, 6, 2, 9}
Sample Output:
1
2
1
*/

#include <iostream>

using namespace std;

int count5s(int arr[], int length)
{
    int count = 0;

    for (int i = 0; i < length - 1; i++)
    {
        if (arr[i] == 5 && arr[i + 1] == 5)
            count++;

        if (arr[i] == 5 && arr[i + 1] == 6)
            count++;
    }

    return count;
}

int main()
{
    int arr1[] = {5, 5, 2};
    int length1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {5, 5, 2, 5, 5};
    int length2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {5, 6, 2, 9};
    int length3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << count5s(arr1, length1) << endl;
    cout << count5s(arr2, length2) << endl;
    cout << count5s(arr3, length3) << endl;

    return 0;
}