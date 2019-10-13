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
	int money;

	cin >> money;

	int* dp = new int[money + 1];

	for (int i = 0; i <= money; i++)
		dp[i] = money + 1;

	int moneyNum;

	cin >> moneyNum;

	int* val = new int[moneyNum];

	for (int i = 0; i < moneyNum; i++)
		cin >> val[i];

	dp[0] = 0;

	int** path = new int*[money + 1];

	for (int i = 0; i <= money; i++)
		path[i] = new int[moneyNum];

	for (int i = 0; i < moneyNum; i++)
		path[0][i] = 0;

	for (int i = 0; i < moneyNum; i++)
	{
		for (int j = val[i]; j <= money; j++)
		{
			if (dp[j - val[i]] != money + 1 && dp[j - val[i]] + 1 < dp[j])
			{
				dp[j] = dp[j - val[i]] + 1;

				for (int k = 0; k < moneyNum; k++)
					path[j][k] = path[j - val[i]][k];

				path[j][i]++;
			}
		}
	}

	if (dp[money] != money + 1)
	{
		cout << dp[money] << endl;

		for (int i = 0; i < moneyNum; i++)
			cout << path[money][i] << ' ';

		cout << endl;
	}
	else
	{
		cout << -1 << endl;
	}

	return 0;
}
