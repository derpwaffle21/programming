#include <iostream>

using namespace std;

int main()
{
	bool map[100][100];

	int n;

	cin >> n;

	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			map[i][j] = false;

	for (int i = 0; i < n; i++)
	{
		int h, w;

		cin >> w >> h;

		for (int j = h; j < h + 10; j++)
			for (int k = w; k < w + 10; k++)
				map[j][k] = true;
	}

	int res = 0;

	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (map[i][j])
				res++;

	cout << res;

	return 0;
}
