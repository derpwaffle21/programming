#include <iostream>

using namespace std;

int main()
{
	int nums[9];

	for (int i = 0; i < 9; i++)
		cin >> nums[i];

	int maxVal = 0, maxPos;

	for (int i = 0; i < 9; i++)
	{
		if (nums[i] > maxVal)
		{
			maxVal = nums[i];
			maxPos = i + 1;
		}
	}

	cout << maxVal << endl;
	cout << maxPos << endl;

	return 0;
}
