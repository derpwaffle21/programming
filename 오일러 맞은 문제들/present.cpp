#include <iostream>

using namespace std;

int main()
{
	int n;
	int res = 1;
	char old = '0';

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		char c;

		cin >> c;

		if (old != c)
		{
			res++;
			old = c;
		}
	}

	cout << res << endl;

	return 0;
}
