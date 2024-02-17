/*
Write a C++ program to check if a given string contains between 2 and 4 'z' characters.
Sample Input:
"frizz"
"zane"
"Zazz"
"false"
Sample Output:
1
0
1
0
*/

#include <iostream>

using namespace std;

bool is_z_count_in_range(string str)
{
    int z_count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'z')
            z_count++;
    }

    return z_count >= 2 && z_count <= 4;
}

int main()
{
    cout << is_z_count_in_range("frizz") << endl;
    cout << is_z_count_in_range("zane") << endl;
    cout << is_z_count_in_range("Zazz") << endl;
    cout << is_z_count_in_range("false") << endl;

    return 0;
}