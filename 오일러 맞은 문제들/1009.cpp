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
	int a, b;
	int sum = 0;

	cin >> a >> b;

	for (int i = a; i <= b; i++)
		if (i % 2 == 1)
			sum += i;

	cout << sum << endl;

	return 0;
}
