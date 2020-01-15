#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int n, x;
	int total = 0;

	cin >> n;
	cin >> x;

	for (int i = 0; i < n; i++)
	{
		int p1, p2;

		cin >> p1 >> p2;

		if (abs(p1 - p2) > x)
		{
			int p3;

			cin >> p3;
			total += p3;
		}
		else
		{
			total += max(p1, p2);
		}
	}

	cout << total << endl;
}
