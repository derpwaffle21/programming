#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>

using namespace std;

int main(void)
{
	int n;
	int startPos = INT_MAX, endPos = 0, heighestPos = 0, heighestVal = 0;

	cin >> n;
	int* height = new int[1001];

	for (int i = 0; i < 1001; i++)
		height[i] = 0;

	for (int i = 0; i < n; i++)
	{
		int pos, val;

		cin >> pos >> val;
		height[pos] = val;

		if (pos < startPos)
			startPos = pos;

		if (pos > endPos)
			endPos = pos;

		if (val > heighestVal)
		{
			heighestVal = val;
			heighestPos = pos;
		}
	}

	int currHeight = 0;
	int res = 0;

	for (int pos = startPos; pos <= heighestPos; pos++)
	{
		if (height[pos] > currHeight)
			currHeight = height[pos];

		res += currHeight;
	}

	for (int pos = heighestPos + 1; pos <= endPos; pos++)
	{
		if (height[pos] < currHeight)
		{
			int h = 0;

			for (int i = pos; i <= endPos; i++)
			{
				if (height[i] > h)
				{
					h = height[i];
				}
			}

			currHeight = h;
		}

		res += currHeight;
	}

	cout << res << endl;

	return 0;
}
