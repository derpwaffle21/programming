#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int aa[10], ba[10];

	cin >> a >> b;

	int alen = 0;

	while (a != 0)
	{
		aa[alen++] = a % 10;
		a /= 10;
	}

	int blen = 0;

	while (b != 0)
	{
		ba[blen++] = b % 10;
		b /= 10;
	}

	int sum = 0;

	for (int i = 0; i < alen; i++)
		for (int j = 0; j < blen; j++)
			sum += (aa[i] * ba[j]);

	cout << sum << endl;

	return 0;
}
