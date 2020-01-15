#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int num;
	int sq;

	cin >> num;
	cin >> sq;

	int sum = 0;

	for (int i = 0; i < num; i++)
	{
		int t;

		cin >> t;

		sum += max(0, int(pow(t, sq)));
	}

	cout << sum << endl;

	return 0;
}
