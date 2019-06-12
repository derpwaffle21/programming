#include <iostream>

using namespace std;

int* binS(int arr[], int len, int target)
{
	int* res = new int[2];

	int first = 0;
	int last = len - 1;
	int times = 0;

	while (first <= last)
	{
		int mid = (first + last) / 2;
		times++;

		if (arr[mid] == target)
		{
			res[0] = mid;
			res[1] = times;
			return res;
		}
		else
		{
			if (arr[mid] > target)
				last = mid - 1;
			else
				first = mid + 1;
		}
	}

	res[0] = -1;
	return res;
}

int main()
{
	int n, m;

	cin >> n >> m;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int* idx = binS(arr, n, m);

	if (idx[0] != -1)
		cout << idx[0] + 1 << ' ' << idx[1] << endl;
	else
		cout << -1 << endl;

	return 0;
}
