#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>

using namespace std;

bool isPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;

	return true;
}

int main(void)
{
	int n;
	int res = 0;

	cin >> n;

	for (int i = 2; i <= int(n / 2); i++)
	{
		if (isPrime(i) && isPrime(n - i))
		{
			cout << i << " " << n - i << endl;
			res++;
		}
	}

	cout << res << endl;

	return 0;
}
