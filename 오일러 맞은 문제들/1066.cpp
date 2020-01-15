#include <iostream>

using namespace std;

int main()
{
	bool students[31];

	for (int i = 1; i <= 30; i++)
		students[i] = false;

	for (int i = 0; i < 28; i++)
	{
		int num;

		cin >> num;
		students[num] = true;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (!students[i])
			cout << i << endl;
	}

	return 0;
}
