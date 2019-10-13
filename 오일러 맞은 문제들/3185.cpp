#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>
#include <numeric>

using namespace std;

int main(void)
{
	long long n, r, c;

	cin >> n >> r >> c;

	cout << min(r, n - c + 1) + min(r, c) + min(c, n - r + 1) + min(n - r + 1, n - c + 1) - 4 << endl;

	return 0;
}
