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

	cout << sum << endl;

	return 0;
}
