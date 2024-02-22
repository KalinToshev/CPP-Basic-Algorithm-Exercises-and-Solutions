/*
Write a C++ program to create an array containing the middle elements from the two given arrays of integers, each of length 5.
Sample Input:
{0, 10, 20, 30, 40}
{0, -10, -20, -30, -40}
Sample Output:
New array:
20 -20
*/

#include<iostream>

using namespace std;

void createMiddleArray(int arr1[], int arr2[], int result[], int n) 
{
    result[0] = arr1[n / 2];
    result[1] = arr2[n / 2];
}

int main() 
{
    int arr1[5] = {0, 10, 20, 30, 40};
    int arr2[5] = {0, -10, -20, -30, -40};
    int result[2];
    
    createMiddleArray(arr1, arr2, result, 5);
    
    cout << result[0] << " " << result[1];
    return 0;
}
