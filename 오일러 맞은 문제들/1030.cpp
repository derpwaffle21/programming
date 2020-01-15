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

	for (int i = 0; i < n; i++)
	{
		int num;

		cin >> num;

		if (num < 10)
			cout << ' ';

		cout << num << ' ';

		for (int j = 0; j < num; j++)
			cout << '*';

		cout << endl;
	}

	return 0;
}
