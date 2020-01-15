#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
	int n;
	int sum = 0;

	cin >> n;

	for (int i = 1; i < 500; i++)
		for (int j = i + 1; j <= 500; j++)
			if ((j * j) - (i * i) == n)
				sum++;

	cout << sum << endl;

	return 0;
}
