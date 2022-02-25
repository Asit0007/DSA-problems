#include <iostream>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cout << "enter no of testcases :";
    cin >> t;
    while (t--)
    {
        int n, w;
        cout << "enter no of days to work and total money to earn :";
        cin >> n >> w;
        int a[n];
        cout << "enter the money that can be earned each day :";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int temp;
        for (int r = 0; r < n; r++)
        {
            for (int c = 1 + r; c < n; c++)
            {
                if (a[r] < a[c])
                {
                    temp = a[r];
                    a[r] = a[c];
                    a[c] = temp;
                }
            }
        }
        int sum = 0;
        int tdays = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[j];
            tdays++;
            cout << "Total no of holiday that the salesman can take :";
            if (sum >= w)
            {
                cout << (n - tdays) << endl;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}
