#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int cnt[10001];

	cin >> n;

	for (int i = 1; i <= 10000; i++)
		cnt[i] = 0;

	for (int i = 0; i < n; i++)
	{
		int num;

		cin >> num;

		cnt[num]++;
	}

	int maxVal = 0, maxPos;

	for (int i = 1; i <= 10000; i++)
	{
		if (cnt[i] > maxVal)
		{
			maxVal = cnt[i];
			maxPos = i;
		}
	}

	cout << maxPos << endl;

	return 0;
}
