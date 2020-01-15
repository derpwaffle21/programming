#include <iostream>

using namespace std;

int main()
{
	bool remainder[42];

	for (int i = 0; i < 42; i++)
		remainder[i] = false;

	for (int i = 0; i < 10; i++)
	{
		int num;

		cin >> num;
		remainder[num % 42] = true;
	}

	int sum = 0;

	for (int i = 0; i < 42; i++)
		if (remainder[i])
			sum++;

	cout << sum << endl;

	return 0;
}
