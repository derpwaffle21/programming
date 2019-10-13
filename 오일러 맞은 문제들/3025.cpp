#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>

using namespace std;

int* numbers;
int n, m;
int pos;

int binarySearch(int depth, int left, int right)
{
	if (left > right)
		return -1;

	int middle = (left + right) / 2;

	if (numbers[middle] == m)
	{
		pos = middle;
		return depth;
	}

	if (numbers[middle] > m)
	{
		return binarySearch(depth + 1, left, middle - 1);
	}
	else
	{
		return binarySearch(depth + 1, middle + 1, right);
	}
}

int main(void)
{
	cin >> n >> m;

	numbers = new int[n];

	for (int i = 0; i < n; i++)
		cin >> numbers[i];

	if (binarySearch(1, 0, n - 1) != -1)
		cout << pos + 1 << " " << binarySearch(1, 0, n - 1) << endl;
	else
		cout << -1 << endl;

	return 0;
}
