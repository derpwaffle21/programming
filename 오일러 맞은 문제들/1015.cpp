#include <iostream>

using namespace std;

int main()
{
	int t;

	cin >> t;

	int n, *a;
	int m, *b;

	cin >> n;
	a = new int[n];

	for (int i = 0; i < n; i++)
		cin >> a[i];

	cin >> m;
	b = new int[m];

	for (int i = 0; i < m; i++)
		cin >> b[i];

	int* aSumCnt = new int[n * 1000 + 1];
	int* bSumCnt = new int[m * 1000 + 1];

	for (int i = 0; i < n * 1000 + 1; i++)
		aSumCnt[i] = 0;

	for (int i = 0; i < m * 1000 + 1; i++)
		bSumCnt[i] = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			int sum = 0;

			for (int k = i; k < i + j; k++)
				sum += a[k];

			aSumCnt[sum]++;
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 1; j <= m - i; j++)
		{
			int sum = 0;

			for (int k = i; k < i + j; k++)
				sum += b[k];

			bSumCnt[sum]++;
		}
	}

	int res = 0;

	for (int i = 1; i < t; i++)
	{
		res += (aSumCnt[i] * bSumCnt[t - i]);
	}

	cout << res << endl;

	return 0;
}
