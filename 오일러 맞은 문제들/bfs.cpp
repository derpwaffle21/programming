#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n, s;

	cin >> n >> s;

	bool** arr = new bool*[n];
	bool* visit = new bool[n];

	for (int i = 0; i < n; i++)
		arr[i] = new bool[n];

	for (int i = 0; i < n; i++)
		visit[i] = false;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	queue<int> q;

	q.push(s - 1);
	visit[s - 1] = true;

	while (!q.empty())
	{
		int t = q.front();
		q.pop();

		cout << t + 1 << ' ';

		for (int i = 0; i < n; i++)
		{
			if (!visit[i] && arr[t][i])
			{
				q.push(i);
				visit[i] = true;
			}
		}
	}

	cout << endl;
}
