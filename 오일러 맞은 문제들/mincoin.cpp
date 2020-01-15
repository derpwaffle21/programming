#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
	int n, m;
	int coin[5] = { 10, 100, 120, 250, 500 };

	cin >> n >> m;

	int t = n - m;
	int* d = new int[t + 1];

	d[0] = 0;

	for (int i = 1; i <= t; i++)
		d[i] = INT_MAX;

	for (int i = 0; i < 5; i++)
		for (int j = coin[i]; j <= t; j++)
			if (d[j] > d[j - coin[i]] + 1)
				d[j] = d[j - coin[i]] + 1;

	cout << d[t] << endl;

	return 0;
}
