#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int* boxes = new int[n];
	int* dp = new int[n];
	int* path = new int[n];
	int start = 0;

	for (int i = 0; i < n; i++)
		cin >> boxes[i];

	int max = 0;

	dp[0] = 1;

	for (int i = 0; i < n; i++)
		path[i] = -1;

	for (int i = 1; i < n; i++)
	{
		dp[i] = 1;

		for (int j = 0; j < i; j++)
		{
			if (boxes[i] > boxes[j] && dp[i] < dp[j] + 1)
			{
				dp[i] = dp[j] + 1;
				path[i] = j;
			}
		}

		if (max < dp[i])
		{
			start = i;
			max = dp[i];
		}
	}

	cout << max << endl;

	int* finalPath = new int[n];
	int pathNum = 0;

	while (start != -1)
	{
		finalPath[pathNum++] = boxes[start];
		start = path[start];
	}

	for (int i = pathNum - 1; i >= 0; i--)
		cout << finalPath[i] << ' ';

	cout << endl;

	return 0;
}
