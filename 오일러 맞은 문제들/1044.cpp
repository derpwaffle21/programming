#include <iostream>

using namespace std;

int main()
{
	int space, num;

	cin >> space >> num;

	bool* pots = new bool[space + 1];

	for (int i = 0; i <= space; i++)
		pots[i] = false;

	for (int i = 0; i < num; i++)
	{
		int start;
		int interval;

		cin >> start >> interval;

		for (int j = start; j <= space; j += interval)
			pots[j] = true;
	}

	int sum = 0;

	for (int i = 1; i <= space; i++)
		if (!pots[i])
			sum++;

	cout << sum << endl;

	return 0;
}
