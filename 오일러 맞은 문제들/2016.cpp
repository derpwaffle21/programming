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
	int n, k;

	cin >> n >> k;
	int sum = n;

	while (n >= k)
	{
		int t = n;

		n %= k;
		n += (int)(t / k);
		sum += (int)(t / k);
	}

	cout << sum << endl;

	return 0;
}
