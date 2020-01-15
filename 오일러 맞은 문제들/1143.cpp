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
	int blue = 0, red = 0;
	bool turn = false;
	int n;

	cin >> n;

	for (int i = 1; i * i <= n; i++)
	{
		if (!turn)
			blue += (i * i) - ((i - 1) * (i - 1));
		else
			red += (i * i) - ((i - 1) * (i - 1));

		turn = !turn;
	}

	cout << abs(blue - red) << endl;

	return 0;
}
