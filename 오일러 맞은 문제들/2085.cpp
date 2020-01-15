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
	int day;

	cin >> day;

	int t = 1;
	int tot = 0;

	while (day > 0)
	{
		day -= t;
		tot += ((t + min(day, 0)) * t);
		t++;
	}

	cout << tot << endl;

	return 0;
}
