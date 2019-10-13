#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>
#include <numeric>

using namespace std;

class garage
{
public:
	int time;
	int pos;
};

int main(void)
{
	int maxDist;
	int garageNum;

	cin >> maxDist >> garageNum;

	garage* garages = new garage[garageNum + 2];

	garages[0].pos = 0;

	for (int i = 1; i <= garageNum + 1; i++)
	{
		int dist;

		cin >> dist;
		garages[i].pos = garages[i - 1].pos + dist;
	}

	garages[0].time = 0;

	for (int i = 1; i <= garageNum; i++)
		cin >> garages[i].time;

	garages[garageNum + 1].time = 0;

	int* dp = new int[garageNum + 2];
	int* hist = new int[garageNum + 2];

	for (int i = 0; i <= garageNum + 1; i++)
	{
		dp[i] = -1;
		hist[i] = 0;

		for (int j = i - 1; j >= 0; j--)
		{
			if (garages[i].pos - garages[j].pos > maxDist)
				break;

			if (dp[i] > dp[j] + garages[i].time || dp[i] == -1)
			{
				dp[i] = dp[j] + garages[i].time;
				hist[i] = j;
			}
		}

		if (dp[i] == -1)
			dp[i] = 0;
	}

	int* path = new int[101];
	int t = hist[garageNum + 1];
	int pathLen = 0;

	while (t != 0)
	{
		path[pathLen++] = t;
		t = hist[t];
	}

	cout << dp[garageNum + 1] << endl;
	cout << pathLen << endl;

	for (int i = pathLen - 1; i >= 0; i--)
		cout << path[i] << ' ';

	cout << endl;

	return 0;
}
