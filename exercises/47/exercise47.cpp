/*
Write a C++ program to check if two or more integers that are not negative have the same rightmost digit.
Sample Input:
11, 21, 31
11, 22, 31
11, 22, 33
Sample Output:
1
1
0
*/

#include <iostream>
#include <map>

using namespace std;

int findLastDigit(int a)
{
    return a % 10;
}

map<int, int> fillTheMap(int a, int b, int c)
{
    map<int, int> digits;
    digits[findLastDigit(a)]++;
    digits[findLastDigit(b)]++;
    digits[findLastDigit(c)]++;
    return digits;
}

bool check(map<int, int> digits)
{
    for (const auto &digit : digits)
        if (digit.second > 1)
            return true;

    return false;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    map<int, int> digits = fillTheMap(a, b, c);

    cout << check(digits) << endl;

    return 0;
}