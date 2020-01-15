#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>
#include <numeric>

using namespace std;

int main()
{
	int n;
	int sum = 0;
	int currTile = 1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		sum += currTile;
		currTile += 4;
	}

	cout << sum - (n - 1) << endl;

	return 0;
}
