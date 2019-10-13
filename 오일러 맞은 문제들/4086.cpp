#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

int main(void)
{
	int n;
	int total = 0;

	cin >> n;
	int* req = new int[n];

	for (int i = 0; i < n; i++)
	{
		int m;

		cin >> m;
		req[i] = m;

		int j = i - 1;
		int key = req[i];

		while (j >= 0 && req[j] < key)
		{
			req[j + 1] = req[j];
			j--;
		}

		req[j + 1] = key;
		total += m;
	}

	int left;

	cin >> left;

	if (left >= total)
		cout << req[0] << endl;
	else
	{
		for (int i = 1; i < n; i++)
		{
			total -= (i * (req[i - 1] - req[i]));

			if (total <= left)
			{
				cout << req[i] + floor((left - total) / i) << endl;
				return 0;
			}
		}

		cout << floor(left / n) << endl;
	}

	return 0;
}
