/*
Write a C++ program to rotate the elements of a given array of integers (length 4 ) in the left direction and return the changed array.
Sample Input:
{ 10, 20, 30, 40 }
Sample Output:
Rotated array:
20 30 40 10
*/

#include<iostream>
using namespace std;

void rotateLeft(int *arr, int n) 
{
    int first = arr[0];

    for(int i = 0; i < n - 1; i++) 
        arr[i] = arr[i + 1];

    arr[n - 1] = first;
}

int main() 
{
    int *arr = new int[4]{10, 20, 30, 40};

    rotateLeft(arr, 4);

    for(int i = 0; i < 4; i++) 
        cout << arr[i] << " ";

    delete[] arr;
    
    return 0;
}
