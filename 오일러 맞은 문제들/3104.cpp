#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>
#include <numeric>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	int** tri = new int*[n];

	for (int i = 0; i < n; i++)
		tri[i] = new int[i + 1];

	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++)
			cin >> tri[i][j];

	int** dp = new int* [n];

	for (int i = 0; i < n; i++)
		dp[i] = new int[i + 2];

	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i + 1; j++)
			dp[i][j] = 0;

	dp[0][0] = tri[0][0];

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j != 0)
			{
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + tri[i][j];
			}
			else
			{
				dp[i][j] = dp[i - 1][j] + tri[i][j];
			}
		}
	}

	cout << *max_element(dp[n - 1], dp[n - 1] + n) << endl;

	return 0;
}
