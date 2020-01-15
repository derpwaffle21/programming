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
	string s;

	while (x != 0)
	{
		s += (x % 10) + 48;
		x /= 10;
	}

	int res = 0;

	for (int i = s.length(); i > 0; i--)
		res += (s[i - 1] - 48) * pow(10, s.length() - i);

	return res;
}

int main()
{
	int n;

	cin >> n;

	cout << n + rev(n) << endl;

	return 0;
}
