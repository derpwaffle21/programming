#include <iostream>

using namespace std;

int dpr(int num)
{
	int result = 1;

	while (num != 0)
	{
		if (num % 10 != 0)
			result *= (num % 10);

		num /= 10;
	}

	return result;
}

int main()
{
	int n;

	cin >> n;

	while (n >= 10)
	{
		cout << n << ' ';
		n = dpr(n);
		cout << n << endl;
	}
}
