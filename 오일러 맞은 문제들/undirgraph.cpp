#include <iostream>

using namespace std;

int main()
{
	int n;
	int m;
	bool connected[100][100];

	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			connected[i][j] = false;

	for (int i = 0; i < m; i++)
	{
		int t1, t2;

		cin >> t1 >> t2;

		connected[t1 - 1][t2 - 1] = connected[t2 - 1][t1 - 1] = true;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << connected[i][j] << ' ';

		cout << endl;
	}
}
