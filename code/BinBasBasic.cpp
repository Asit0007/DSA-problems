#include <iostream>
#include <string>
using namespace std;
// n is the number of bits
// t is number of testcases
// m is the number of operations
// s is the input string of bits
// this program checks if the input can be made a palindrom with m given operation numbers

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		// fastio;
		int n, m;
		cin >> n >> m;
		string s;
		cin >> s;
		// check how many bits are different from its reverse order bit
		for (int i = 0; i < n / 2; i++)
		{
			if (s[i] != s[n - i - 1])
				m--;
		}
		// when m is less than the number of bits that are different
		if (m < 0)
		{
			cout << "NO" << endl;
			continue;
		}
		// when m is more than the number of bits that are different and the string is odd
		else if (n % 2 == 1)
		{
			cout << "YES" << endl;
			continue;
		}
		// when m is more than the number of bits that are different and the string is even
		if (m % 2 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
