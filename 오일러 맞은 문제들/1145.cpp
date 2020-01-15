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
	int inc = 1;

	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		cnt += inc;
		inc++;
	}

	cout << cnt + 1 << endl;

	return 0;
}
