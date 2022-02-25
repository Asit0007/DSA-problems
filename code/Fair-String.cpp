#include <iostream>
#include <string>
#include <vector>
#define pb push_back

using namespace std;

// solving the problem
int solve(int N, string A, int C[])
{
    // state space
    int fans = 2e9;
    int flag = 0;

    // creating a reference array of possible fair strings
    string Ref[N];
    for (int i = 0; i < N; i += 2)
    {
        if (!flag)
        {
            Ref[0].pb('0');
            Ref[0].pb('0');
            Ref[1].pb('1');
            Ref[1].pb('1');
        }
        else
        {
            Ref[0].pb('1');
            Ref[0].pb('1');
            Ref[1].pb('0');
            Ref[1].pb('0');
        }
        flag = !flag;
    }
    for (int j = 0; j < N; j += 1)
    {
        if (!flag)
        {
            Ref[2].pb('0');
            Ref[3].pb('1');
        }
        else
        {
            Ref[2].pb('1');
            Ref[3].pb('0');
        }
        flag = !flag;
    }
    for (int k = 0; k < 4; k++)
    {
        int ans = 0;
        for (int l = 0; l < N; l++)
        {
            if (A[l] != Ref[k][l])
            {
                ans += C[l];
            }
        }
        fans = min(fans, ans);
    }
    return fans;
}

int main()
{

    int T;
    cout << "enter no of testcases : " << endl;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cout << "enter size of array : " << endl;
        cin >> N;
        cout << "enter a string containing 0's and 1's : " << endl;
        string A;
        cin >> A;

        cout << "enter the cost of operations : " << endl;
        int C[N];
        for (int i_C = 0; i_C < N; i_C++)
        {
            cin >> C[i_C];
        }

        long long out_;
        out_ = solve(N, A, C);
        cout << "Total cost of operations to convert input string into fair string is : " << out_;
        cout << "\n";
    }
}