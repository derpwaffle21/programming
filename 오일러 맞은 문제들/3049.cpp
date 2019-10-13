#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>

using namespace std;

const int INF = 10000000;

int main(void)
{
    int n;

    cin >> n;

    int** con = new int*[n];

    for (int i = 0; i < n; i++)
        con[i] = new int[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                con[i][j] = 0;
            else
                con[i][j] = INF;
        }
    }

    int from, to;

    cin >> from >> to;
    from--;
    to--;

    int m;

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int f, t, weight;
        cin >> f >> t >> weight;

        if (weight < con[f - 1][t - 1])
            con[f - 1][t - 1] = con[t - 1][f - 1] = weight;
    }

    bool * visited = new bool[n];
    int * dist = new int[n];
    int * hist = new int[n];

    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
        dist[i] = INF;
    }

    dist[from] = 0;
    hist[from] = -1;

    int v = 0;

    for (int i = 0; i < n; i++)
    {
        int minV = INF;

        for (int j = 0; j < n; j++)
        {
            if (!visited[j] && minV > dist[j])
            {
                minV = dist[j];
                v = j;
            }
        }

        visited[v] = true;

        for (int j = 0; j < n; j++)
        {
            if (dist[j] > dist[v] + con[v][j])
            {
                dist[j] = dist[v] + con[v][j];
                hist[j] = v;
            }
        }
    }

    cout << dist[to] << endl;

    int finalPathLen = 0;
    int * finalPath = new int[n];
    int lastHist = to;

    while (lastHist != -1)
    {
        finalPath[finalPathLen++] = lastHist;
        lastHist = hist[lastHist];
    }

    cout << finalPathLen << endl;

    for (int i = finalPathLen - 1; i >= 0; i--)
        cout << finalPath[i] + 1 << ' ';

    cout << endl;

	return 0;
}
