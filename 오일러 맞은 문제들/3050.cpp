#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>

#define INF 10000000

using namespace std;

int main(void)
{
	int t, c, ts, te;

	cin >> t >> c >> ts >> te;
	te--;
	ts--;

	int** conn = new int* [t];

	for (int i = 0; i < t; i++)
	{
		conn[i] = new int[t];

		for (int j = 0; j < t; j++)
		{
			conn[i][j] = INF;
		}
	}

	for (int i = 0; i < c; i++)
	{
		int r1i, r2i, ci;

		cin >> r1i >> r2i >> ci;

		r1i--;
		r2i--;

		if (conn[r1i][r2i] > ci)
			conn[r1i][r2i] = conn[r2i][r1i] = ci;
	}

	bool* visit = new bool[t];
	int* dist = new int[t];

	for (int i = 0; i < t; i++)
		visit[i] = false;

	for (int i = 0; i < t; i++)
		dist[i] = INF;

	dist[ts] = 0;

	int v = 0;

	for (int i = 0; i < t; i++)
	{
		int minV = INF;

		for (int j = 0; j < t; j++)
		{
			if (!visit[j] && minV > dist[j])
			{
				minV = dist[j];
				v = j;
			}
		}

		visit[v] = true;

		for (int j = 0; j < t; j++)
		{
			if (dist[j] > dist[v] + conn[v][j])
			{
				dist[j] = dist[v] + conn[v][j];
			}
		}
	}

	cout << dist[te] << endl;

	return 0;
}
