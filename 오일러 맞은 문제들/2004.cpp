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

	int side = n * 2;

	if (k >= n)
		cout << 2 << endl;
	else
		cout << ceil((double)side / k) << endl;

	return 0;
}
