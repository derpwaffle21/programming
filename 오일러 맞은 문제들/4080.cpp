#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	int last = 0;

	cin >> n;

	int height[101];

	for (int i = 0; i < 101; i++)
		height[i] = 0;

	for (int i = 0; i < n; i++)
	{
		int s, e, h;

		cin >> s >> e >> h;

		if (e > last)
			last = e;

		if (height[e] < h)
			e--;

		for (int i = s; i <= e; i++)
		{
			if (height[i] < h)
				height[i] = h;
		}
	}

	int currHeight = 0;

	for (int i = 1; i <= last; i++)
	{
		if (i == last)
			cout << i << endl;
		else if (height[i] != currHeight)
		{
			cout << i << "(" << height[i] << ")";

			currHeight = height[i];
		}
	}

	return 0;
}
