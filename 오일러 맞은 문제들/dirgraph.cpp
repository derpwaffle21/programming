#include <iostream>

using namespace std;

int main()
{
	int n;
	int m;
	int connected[100][100];

	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			connected[i][j] = false;

	for (int i = 0; i < m; i++)
	{
		int t1, t2, time;

		cin >> t1 >> t2 >> time;

		connected[t1 - 1][t2 - 1] = time;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << connected[i][j] << ' ';

		cout << endl;
	}
}
