/*
Write a C++ program to check if an array of integers with length 2 does not contain 15 or 20.
Sample Input:
{ 12, 20 }
{ 14, 15 }
{ 11, 21 }
Sample Output:
0
0
1
*/

#include<iostream>
using namespace std;

bool checkArray(int arr[], int n) 
{
    for(int i = 0; i < n; i++) 
        if(arr[i] == 15 || arr[i] == 20) 
            return false;
            
    return true;
}

int main() 
{
    int arr1[2] = {12, 20};
    int arr2[2] = {14, 15};
    int arr3[2] = {11, 21};
    
    cout << checkArray(arr1, 2) << endl;
    cout << checkArray(arr2, 2) << endl;
    cout << checkArray(arr3, 2) << endl;
    
    return 0;
}
