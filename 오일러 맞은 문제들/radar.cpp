#include <iostream>

using namespace std;

int reverse(int n)
{
	int rev = 0;

	while (n != 0)
	{
		rev = rev * 10 + (n % 10);
		n /= 10;
	}

	return rev;
}

bool isRadar(int n)
{
	if (n == reverse(n))
		return true;

	return false;
}

int main()
{
	int n;
	int i = 0;

	cin >> n;

	while (!isRadar(n))
	{
		int rev = reverse(n);
		n += rev;

		i++;
	}

	cout << i << ' ' << n << endl;
}
