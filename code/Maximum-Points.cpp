#include <bits/stdc++.h>
using namespace std;

long long int maximumPoints(long long int x, long long int y, long long int m)
{
    // state space
    long long int points = 0;

    while (x >= m) // for 1st box operation
    {
        long long int mul = x / m;
        points = points + (mul * m);
        x = x % m;
    }
    while (y >= m) // for second box operation
    {
        long long int mul1 = y / m;
        points = points + (mul1 * m);
        y = y % m;
    }
    long long int sum = x + y;
    if (sum >= m) // for remaining operations
    {
        long long int temp = m - max(x, y);
        points -= temp;
        points += m;
    }
    return points;
}