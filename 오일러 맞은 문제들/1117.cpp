#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>
#include <numeric>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int x, n;

	cin >> x;
	cin >> n;

	int used = 0;

	for (int i = 0; i < n; i++)
	{
		int t;

		cin >> t;

		used += t;
	}

	cout << (x * (n + 1)) - used << endl;

	return 0;
}
