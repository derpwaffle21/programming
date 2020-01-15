#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
	int n;
	int cnt = 0;

	cin >> n;

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			for (int k = 1; k <= 10; k++)
			{
				if ((i * 2) + (j * 3) + (k * 5) == n)
				{
					cout << i << " " << j << " " << k << endl;
					cnt++;
				}
			}
		}
	}

	cout << cnt << endl;

	return 0;
}
