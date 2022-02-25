#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll int maximum(ll int a, ll int b, ll int c)
{
    ll int m = 0;
    m = max(a, b);
    m = max(m, c);
    return m;
}

ll int sum(ll int a, ll int b, ll int c)
{
    ll int sum = 0;
    sum = a + b + c;
    return sum;
}

int main()
{
    int t;
    // cout << "enter the number of testcases: ";
    cin >> t;
    while (t--)
    {
        long long int l1, l2, l3;
        long long int max = 0;
        // cout << "enter the length of 3 sticks: ";
        cin >> l1 >> l2 >> l3;
        ll int m = maximum(l1, l2, l3);
        ll int temp = m * 2;
        ll int ans = sum(l1, l2, l3);
        if (temp == ans && ans != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (l1 == l2 && l3 % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else if (l3 == l2 && l1 % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else if (l1 == l3 && l2 % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}