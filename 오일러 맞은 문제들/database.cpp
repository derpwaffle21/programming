#include <iostream>

using namespace std;

int database[1000][1000];

int main()
{
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> database[i][j];

	int q;

	cin >> q;

	for (int i = 0; i < q; i++)
	{
		int* ans = new int[n];
		int cnt = 0;

		for (int j = 0; j < m; j++)
			cin >> ans[j];

		for (int j = 0; j < n; j++)
		{
			bool flag = true;

			for (int k = 0; k < m; k++)
			{
				if (ans[k] != -1 && ans[k] != database[j][k])
				{
					flag = false;
					break;
				}
			}

			if (flag)
				cnt++;
		}

		cout << cnt << endl;
	}
}
