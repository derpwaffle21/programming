#include <iostream>

using namespace std;

int main()
{
	int n;
	int min = INT_MAX, max = INT_MIN;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int t;

		cin >> t;

		if (t < min)
			min = t;

		if (t > max)
			max = t;
	}

	cout << max - min << endl;
}
