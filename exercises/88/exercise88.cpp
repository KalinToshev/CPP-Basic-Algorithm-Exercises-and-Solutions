/*
Write a C++ program to create an array taking the first and last elements of a given array of integers and length 1 or more.
Sample Input:
{ 10, 20, -30, -40, 30 }
Sample Output:
New array:
10 30
*/

#include <iostream>

using namespace std;

int main()
{
    //Initialize the array
    int arr[] = {10, 20, -30, -40, 30};

    //Get the length of the array
    int length = sizeof(arr) / sizeof(arr[0]);

    //Create a new array
    int newArr[] = {arr[0], arr[length - 1]};

    //Print the new array
    cout << "New array: " << newArr[0] << " " << newArr[1] << endl;
    return 0;
}