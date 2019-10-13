#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>

using namespace std;

int fibo(int a, int b, int n, int depth = 0)
{
	if (n == depth)
		return a;

	return fibo(b, a + b, n, depth + 1);
}

int main(void)
{
	int n;

	cin >> n;

	int m = 0;

	cin >> m;

	int res = 1;
	int lastInput = 0;

	for (int i = 0; i < m; i++)
	{
		int reservation;

		cin >> reservation;

		res *= fibo(1, 1, reservation - lastInput - 1);
		lastInput = reservation;
	}

	res *= fibo(1, 1, n - lastInput);

	cout << res << endl;

	return 0;
}
