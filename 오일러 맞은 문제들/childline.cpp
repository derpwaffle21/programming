#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int* a = new int[n];
	int* d = new int[n];
	int max = 0;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++)
	{
		d[i] = 1;

		for (int j = 0; j < i; j++)
		{
			if (a[j] < a[i] && d[i] < d[j] + 1)
				d[i]++;
		}

		if (max < d[i])
			max = d[i];
	}

	cout << n - max << endl;

	return 0;
}
