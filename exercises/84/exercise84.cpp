/*
Write a C++ program to compute the sum of the elements of an array of integers.
Sample Input:
{ 10, 20, 30, 40, 50 }
{ 10, 20, -30, -40, 50 }
Sample Output:
150
10
*/

#include <iostream>

using namespace std;

const int SIZE = 5; 

int sum(int arr[], int length)
{
    int sum = 0;

    for (int i = 0; i < length; i++)
        sum += arr[i];

    return sum;
}

int main() 
{
    int arr1[SIZE] = { 10, 20, 30, 40, 50 };
    int arr2[SIZE] = { 10, 20, -30, -40, 50 };

    cout << sum(arr1, SIZE) << endl;
    cout << sum(arr2, SIZE) << endl;

    return 0;
}