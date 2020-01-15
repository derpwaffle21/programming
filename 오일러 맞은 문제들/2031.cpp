#include <iostream>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	bool* lights = new bool[n];

	for (int i = 0; i < n; i++)
		lights[i] = false;

	for (int i = 0; i < m; i++)
	{
		int op, si, ei;

		cin >> op >> si >> ei;

		if (op == 0)
		{
			for (int i = si; i <= ei; i++)
				lights[i - 1] = !lights[i - 1];
		}
		else if (op == 1)
		{
			int sum = 0;

			for (int i = si; i <= ei; i++)
				if (lights[i - 1])
					sum++;

			cout << sum << endl;
		}
	}

	return 0;
}
