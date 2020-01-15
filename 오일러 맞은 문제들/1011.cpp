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
		if (n % i == 0)
			sum += i;

	cout << sum << endl;
}
