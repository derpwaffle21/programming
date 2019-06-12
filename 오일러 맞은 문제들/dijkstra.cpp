#include <iostream>

#define INF 10000000

using namespace std;

int main()
{
	int nodeNum, start, end;
	int conNum;

	cin >> nodeNum >> start >> end;
	cin >> conNum;

	int** con = new int* [nodeNum + 1];
	
	for (int i = 0; i <= nodeNum; i++)
		con[i] = new int[nodeNum + 1];

	bool* visit = new bool[nodeNum + 1];
	int* dist = new int[nodeNum + 1];
	int* path = new int[nodeNum + 1];

	for (int i = 1; i <= nodeNum; i++)
	{
		for (int j = 1; j <= nodeNum; j++)
		{
			if (i != j)
				con[i][j] = INF;
			else
				con[i][j] = 0;
		}
	}

	for (int i = 1; i <= nodeNum; i++)
	{
		dist[i] = INF;
		visit[i] = false;
	}

	for (int i = 1; i <= conNum; i++)
	{
		int from, to, weight;

		cin >> from >> to >> weight;

		if (weight < con[from][to])
			con[from][to] = weight;
	}

	dist[start] = 0;
	path[start] = 0;

	int v = 0;

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
		{
			if (dist[j] > dist[v] + con[v][j])
			{
				dist[j] = dist[v] + con[v][j];
				path[j] = v;
			}
		}
	}

	cout << dist[end] << endl;

	int t = end;
	int pathLen = 0;
	int* finalPath = new int[nodeNum];

	while (t != 0)
	{
		finalPath[pathLen++] = t;
		t = path[t];
	}

	cout << pathLen << endl;

	for (int i = pathLen - 1; i >= 0; i--)
		cout << finalPath[i] << ' ';

	cout << endl;

	return 0;
}
