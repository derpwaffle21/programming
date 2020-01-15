#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	for (int i = 1; i <= a; i++)
		for (int j = 1; j <= b; j++)
			if (a % i == 0 && b % j == 0)
				cout << i << ' ' << j << endl;

	return 0;
}
