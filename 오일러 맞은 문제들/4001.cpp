#include <iostream>
#include <algorithm>

using namespace std;

class Elephant
{
public:
	int iq;
	int weight;
	int num;
};

int main(void)
{
	int n;

	cin >> n;

	Elephant* elephants = new Elephant[n];

	for (int i = 0; i < n; i++)
	{
		cin >> elephants[i].weight >> elephants[i].iq;
		elephants[i].num = i + 1;
	}

	int* dp = new int[n];
	int* history = new int[n];

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (elephants[i].iq < elephants[j].iq)
				swap(elephants[i], elephants[j]);

	for (int i = 0; i < n; i++)
	{
		history[i] = -1;
		dp[i] = 1;

		for (int j = 0; j < i; j++)
		{
			if (elephants[i].weight > elephants[j].weight && elephants[i].iq != elephants[j].iq && dp[i] < dp[j] + 1)
			{
				dp[i] = dp[j] + 1;
				history[i] = j;
			}
		}
	}

	int maxVal = 0, currPos;

	for (int i = 0; i < n; i++)
	{
		if (dp[i] > maxVal)
		{
			maxVal = dp[i];
			currPos = i;
		}
	}

	cout << maxVal << endl;

	int* path = new int[n];
	int currNum = 0;

	while (currPos != -1)
	{
		path[currNum++] = elephants[currPos].num;
		currPos = history[currPos];
	}

	for (int i = currNum - 1; i >= 0; i--)
		cout << path[i] << endl;

	return 0;
}
