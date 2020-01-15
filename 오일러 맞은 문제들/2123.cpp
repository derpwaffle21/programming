#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int k[3];

	cin >> k[0] >> k[1] >> k[2];

	sort(k, k + 3);

	int a1 = k[1] - k[0];
	int a2 = k[2] - k[1];

	if (a1 == a2)
	{
		cout << k[2] + a2 << endl;
	}
	else
	{
		if (a1 > a2)
		{
			cout << k[0] + a2 << endl;
		}
		else
		{
			cout << k[2] - a1 << endl;
		}
	}

	return 0;
}
