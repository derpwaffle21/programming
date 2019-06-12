#include <iostream>

using namespace std;

#define INF 1000000

int main()
{
	int nodeNum, s, e;
	int conNum;

	cin >> nodeNum >> conNum >> s >> e;

	int** a = new int* [nodeNum + 1];

	for (int i = 0; i <= nodeNum; i++)
		a[i] = new int[nodeNum + 1];

	bool* visit = new bool[nodeNum + 1];
	int* dist = new int[nodeNum + 1];

	for (int i = 1; i <= nodeNum; i++)
	{
		for (int j = 1; j <= nodeNum; j++)
		{
			if (i != j)
				a[i][j] = INF;
			else
				a[i][j] = 0;
		}
	}

	for (int i = 1; i <= nodeNum; i++)
	{
		dist[i] = INF;
		visit[i] = false;
	}

	for (int i = 1; i <= conNum; i++)
	{
		int f, t, w;

		cin >> f >> t >> w;

		if (w < a[f][t])
			a[f][t] = a[t][f] = w;
	}
	
	dist[s] = 0;

	int v;

	for (int i = 1; i <= nodeNum; i++)
	{
		int minV = INF;

		for (int j = 1; j <= nodeNum; j++)
		{
			if (!visit[j] && minV > dist[j])
			{
				minV = dist[j];
				v = j;
			}
		}

		visit[v] = true;

		for (int j = 1; j <= nodeNum; j++)
			if (dist[j] > dist[v] + a[v][j])
				dist[j] = dist[v] + a[v][j];
	}

	cout << dist[e] << endl;

	return 0;
}
