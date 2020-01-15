#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	int cnt[101];

	for (int i = 0; i <= 100; i++)
		cnt[i] = 0;

	for (int i = 0; i < 3; i++)
	{
		int s, e;

		cin >> s >> e;

		for (int j = s; j < e; j++)
			cnt[j]++;
	}

	int sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		if (cnt[i] == 1)
			sum += a;
		else if (cnt[i] == 2)
			sum += (b * 2);
		else if (cnt[i] == 3)
			sum += (c * 3);
	}

	cout << sum << endl;

	return 0;
}
