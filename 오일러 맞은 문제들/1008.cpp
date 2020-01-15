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
	int sum = 1;

	cin >> n;

	for (int i = 0; i < n; i++)
		sum *= (i + 1);

	cout << n << "!=(";

	for (int i = 0; i < n; i++)
	{
		cout << i + 1;

		if (i != n - 1)
			cout << "*";
	}

	cout << ")=" << sum << endl;

	return 0;
}
