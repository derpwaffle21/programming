#include <iostream>
#include <algorithm>

using namespace std;

#define INT_MAX 2147483647

int main()
{
	int c, n;

	cin >> c >> n;
	int* coins = new int[n];
	int* dp = new int[c + 1];

	for (int i = 0; i < n; i++)
		cin >> coins[i];

	dp[0] = 0;

	for (int i = 1; i <= c; i++)
		dp[i] = INT_MAX;

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (coins[i] > coins[j])
				swap(coins[i], coins[j]);

	for (int i = 0; i < n; i++)
		for (int j = coins[i]; j <= c; j++)
			if (dp[j] > dp[j - coins[i]] + 1)
				dp[j] = dp[j - coins[i]] + 1;

	cout << dp[c] << endl;
}
