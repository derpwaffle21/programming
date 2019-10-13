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
	int n;

	cin >> n;

	long long* p = new long long[max(5, n)];

	p[0] = 1;
	p[1] = 1;
	p[2] = 1;
	p[3] = 2;
	p[4] = 2;

	for (int i = 5; i < n; i++)
		p[i] = p[i - 5] + p[i - 4] + p[i - 3];

	cout << p[n - 1] << endl;

	return 0;
}
