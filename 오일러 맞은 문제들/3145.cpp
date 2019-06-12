#include <iostream>
#include <algorithm>

using namespace std;

int biggest(int arr[5], int curr, int total, int cnt)
{
	if (cnt == 3)
	{
		return total % 10;
	}
	else if (curr > 4)
	{
		return -1;
	}

	return max(biggest(arr, curr + 1, total + arr[curr], cnt + 1), biggest(arr, curr + 1, total, cnt));
}

int main()
{
	int n;

	cin >> n;

	int max = 0;
	int maxP = 0;

	for (int i = 0; i < n; i++)
	{
		int* cards = new int[5];

		for (int i = 0; i < 5; i++)
			cin >> cards[i];

		int val = biggest(cards, 0, 0, 0);

		if (val >= max)
		{
			maxP = i + 1;
			max = val;
		}
	}

	cout << maxP << endl;

	return 0;
}
