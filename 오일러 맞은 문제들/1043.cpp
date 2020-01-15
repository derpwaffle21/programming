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

int rev(int x)
{
	return ((x % 10) * 100) + ((x % 100) - (x % 10)) + int(x / 100);
}

int main()
{
	int a, b;

	cin >> a >> b;

	a = rev(a);
	b = rev(b);

	cout << max(a, b) << endl;

	return 0;
}
