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

	cin >> n;

	int maxVal = n;

	while (n != 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = (n * 3) + 1;

		if (n > maxVal)
			maxVal = n;
	}

	cout << maxVal << endl;

	return 0;
}
