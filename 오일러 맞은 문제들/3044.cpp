#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>
#include <numeric>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int* num = new int[n];

	for (int i = 0; i < n; i++)
		cin >> num[i];

	int* dp = new int[n];

	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;

		for (int j = 0; j < i; j++)
			if (dp[i] < dp[j] + 1 && num[i] < num[j])
				dp[i] = dp[j] + 1;
	}

	cout << *max_element(dp, dp + n) << endl;

	return 0;
}
