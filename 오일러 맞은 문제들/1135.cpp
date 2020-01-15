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
	int currOdd = 1;
	int oddSum = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		oddSum += currOdd;
		sum += oddSum;

		currOdd += 2;
	}

	cout << sum << endl;

	return 0;
}
