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

bool isPrime(int n)
{
	if (n < 2)
		return false;

	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;

	return true;
}


int main()
{
	int n;

	cin >> n;

	for (int i = 0; pow(2, i) - 1 <= n; i++)
		if (isPrime(pow(2, i) - 1))
			cout << pow(2, i) - 1 << endl;

	return 0;
}
