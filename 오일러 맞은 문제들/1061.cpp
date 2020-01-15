#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int score[10];

	for (int i = 0; i < 10; i++)
		cin >> score[i];

	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		int addedSum = sum + score[i];

		if (abs(100 - addedSum) <= abs(100 - sum))
			sum = addedSum;
		else
			break;
	}

	cout << sum << endl;

	return 0;
}
