#include <iostream>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	bool* switches = new bool[n + 1];

	for (int i = 1; i <= n; i++)
		cin >> switches[i];

	int m;

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int sex, num;

		cin >> sex >> num;

		if (sex == 1)
		{
			for (int j = num; j <= n; j += num)
			{
				switches[j] = !switches[j];
			}
		}
		else if (sex == 2)
		{
			switches[num] = !switches[num];

			if (num == 1 || num == n)
				continue;

			int j = 1;

			while (switches[num - j] == switches[num + j])
			{
				switches[num - j] = !switches[num - j];
				switches[num + j] = !switches[num + j];
				j++;

				if (num - j < 1 || num + j > n)
					break;
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << switches[i] << ' ';

		if (i % 20 == 0)
			cout << endl;
	}

	cout << endl;

	return 0;
}
