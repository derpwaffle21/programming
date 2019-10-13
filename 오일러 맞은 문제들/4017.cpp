#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	int* stairs = new int[n];

	for (int i = 0; i < n; i++)
		cin >> stairs[i];

	int* dp = new int[n + 1];

	dp[0] = stairs[0];
	dp[1] = max(stairs[0] + stairs[1], stairs[1]);
	dp[2] = max(stairs[0] + stairs[2], stairs[1] + stairs[2]);

	for (int i = 3; i < n; i++)
		dp[i] = max(dp[i - 2] + stairs[i], dp[i - 3] + stairs[i] + stairs[i - 1]);

	cout << dp[n - 1] << endl;

	return 0;
}
