#include <iostream>

using namespace std;

int same(int n)
{
	int cnt[10];

	for (int i = 0; i < 10; i++)
		cnt[i] = 0;

	while (n != 0)
	{
		cnt[n % 10]++;
		n /= 10;
	}

	int m = 0;

	for (int i = 0; i < 10; i++)
		if (m < cnt[i])
			m = cnt[i];

	return m;
}

int main()
{
	int n, s;

	cin >> n >> s;

	int result = 0;

	for (int i = 0; i < n; i++)
	{
		int t;

		cin >> t;

		if (same(t) == s)
			result++;
	}

	cout << result << endl;
}
