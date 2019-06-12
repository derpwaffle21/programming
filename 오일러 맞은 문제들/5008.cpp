#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int from, dest;

	cin >> from >> dest;

	from--;
	dest--;

	bool** conn = new bool*[n];

	for (int i = 0; i < n; i++)
		conn[i] = new bool[n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			conn[i][j] = false;

	int m;

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int f, t;

		cin >> f >> t;

		conn[f - 1][t - 1] = conn[t - 1][f - 1] = true;
	}

	bool* visited = new bool[n];

	for (int i = 0; i < n; i++)
		visited[i] = false;

	visited[from] = true;

	int cnt = 0;
	queue<int> q;
	q.push(from);

	while (!q.empty())
	{
		cnt++;
		int qSize = q.size();

		for (int i = 0; i < qSize; i++)
		{
			int p = q.front();
			q.pop();

			for (int j = 0; j < n; j++)
			{
				if (conn[p][j] && !visited[j])
				{
					if (j == dest)
					{
						cout << cnt << endl;
						return 0;
					}
					else
					{
						q.push(j);
						visited[j] = true;
					}
				}
			}
		}
	}

	cout << -1 << endl;

	return 0;
}
