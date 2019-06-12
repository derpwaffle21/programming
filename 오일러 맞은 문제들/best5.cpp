#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int best[8];
	int num[8];

	for (int i = 0; i < 8; i++)
	{
		cin >> best[i];
		num[i] = i + 1;
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = i + 1; j < 8; j++)
		{
			if (best[i] < best[j])
			{
				swap(best[i], best[j]);
				swap(num[i], num[j]);
			}
		}
	}

	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 5; j++)
			if (num[i] > num[j])
				swap(num[i], num[j]);

	int total = 0;

	for (int i = 0; i < 5; i++)
		total += best[i];

	cout << total << endl;

	for (int i = 0; i < 5; i++)
		cout << num[i] << ' ';

	cout << endl;
}
