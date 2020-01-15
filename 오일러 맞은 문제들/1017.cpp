#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int* coins = new int[n + 1];

	coins[1] = 1;
	coins[2] = 1;

	for (int i = 3; i <= n; i++)
	{
		if (i % 2 == 0)
			coins[i] = coins[i / 2];
		else
			coins[i] = coins[(i - 1) / 2] + coins[(i + 1) / 2];
	}

	cout << *max_element(coins + 1, coins + n + 1) << endl;

	return 0;
}
