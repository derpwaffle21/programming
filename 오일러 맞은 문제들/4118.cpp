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
	long long* dp = new long long[251];

	dp[1] = 1;
	dp[2] = 3;

	for (int i = 3; i <= 250; i++)
	{
		dp[i] = ((dp[i - 1] % 1000000000) + ((dp[i - 2] * 2) % 1000000000)) % 1000000000;
	}

	int n;

	cin >> n;

	cout << dp[n] << endl;

	return 0;
}
