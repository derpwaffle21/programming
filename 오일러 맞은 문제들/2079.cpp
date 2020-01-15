#include <iostream>

using namespace std;

int main()
{
	int l, m;

	cin >> l >> m;

	l++;

	for (int i = 0; i < m; i++)
	{
		int s, e;

		cin >> s >> e;

		l -= (e - s + 1);
	}

	cout << l << endl;

	return 0;
}
