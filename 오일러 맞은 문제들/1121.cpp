#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, x;

	cin >> n;
	cin >> x;

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		int p1, p2;

		cin >> p1 >> p2;

		int diff = abs(p1 - p2);

		if (diff > x)
		{
			int p3;

			cin >> p3;
			sum += p3;
		}
		else
		{
			sum += max(p1, p2);
		}
	}

	cout << sum << endl;

	return 0;
}
