/*
Write a C++ program to reverse a given array of integers of length 5.
Sample Input:
{ 0, 10, 20, 30, 40 }
Sample Output:
Reverse array:
40 30 20 10 0
*/

#include<iostream>
using namespace std;

void reverseArray(int arr[], int n) 
{
    for(int i = 0; i < n / 2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() 
{
    int arr[5] = {0, 10, 20, 30, 40};
    reverseArray(arr, 5);

    for(int i = 0; i < 5; i++) 
        cout << arr[i] << " ";
        
    return 0;
}
