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

	cin >> n;

	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= i; j++)
			sum += (i + j);

	cout << sum << endl;

	return 0;
}
