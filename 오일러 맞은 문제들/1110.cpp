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
	int piece = 1;
	int n;
	int inc = 1;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			inc++;

		piece += inc;
	}

	cout << piece << endl;

	return 0;
}
