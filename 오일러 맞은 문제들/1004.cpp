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

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
			sum += (i * i);
		else
			sum -= (i * i);
	}

	cout << sum << endl;

	return 0;
}
