#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int currSum = 0;

	for (int i = 0; i < n; i++)
	{
		int t;

		cin >> t;

		int needed = t * (i + 1);

		cout << needed - currSum << ' ';
		currSum = needed;
	}

	return 0;
}
