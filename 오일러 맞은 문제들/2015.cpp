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

	cin >> n;

	bool* locked = new bool[n + 1];

	for (int i = 1; i <= n; i++)
		locked[i] = true;

	for (int i = 1; i <= n; i++)
		for (int j = i; j <= n; j += i)
			locked[j] = !locked[j];

	int sum = 0;

	for (int i = 1; i <= n; i++)
		if (!locked[i])
			sum++;

	cout << sum << endl;

	return 0;
}
