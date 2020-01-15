#include <iostream>

using namespace std;

int main()
{
	int n;
	int weights[2] = { 3, 5 };

	cin >> n;
	int * s = new int[n + 1];

	s[0] = 0;

	for (int i = 1; i <= n; i++)
		s[i] = 1000;

	for (int i = 0; i < 2; i++)
	{
		for (int j = weights[i]; j <= n; j++)
		{
			if (s[j] > s[j - weights[i]] + 1)
				s[j] = s[j - weights[i]] + 1;
		}
	}

	if (s[n] != 1000)
		cout << s[n] << endl;
	else
		cout << -1 << endl;
}
