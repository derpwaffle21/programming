#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;
	int* dishes = new int[n];
	int* dp = new int[n];
	int max = 0;

	for (int i = 0; i < n; i++)
		cin >> dishes[i];

	dp[0] = 1;

	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;

		for (int j = 0; j < i; j++)
			if (dishes[i] < dishes[j])
				if (dp[i] < dp[j] + 1)
					dp[i] = dp[j] + 1;

		if (max < dp[i])
			max = dp[i];
	}

	cout << max << endl;

	return 0;
}
