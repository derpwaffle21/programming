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
	int n;

	cin >> n;

	int evenSum = 0, oddSum = 0;

	for (int i = 0; i < n; i++)
	{
		int num;

		cin >> num;

		if (num % 2 == 0)
			evenSum += num;
		else
			oddSum += num;
	}

	cout << evenSum << ' ' << oddSum << endl;

	return 0;
}
