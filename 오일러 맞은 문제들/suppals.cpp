#include <iostream>
#include <cmath>

using namespace std;

int PalNum(int n)
{
	int res = 0;

	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0)
			res += i;

	return res;
}

int main()
{
	int n;

	cin >> n;

	for (int i = n; true; i++)
	{
		if (PalNum(PalNum(i)) == i && PalNum(i) != i)
		{
			cout << i << ' ' << PalNum(i) << endl;
			break;
		}
	}

	return 0;
}
