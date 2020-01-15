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
	int l, p;

	cin >> l >> p;

	int num = l * p;

	for (int i = 0; i < 5; i++)
	{
		int t;

		cin >> t;

		cout << t - num << ' ';
	}

	cout << endl;

	return 0;
}
