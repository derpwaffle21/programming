#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;

	/*
	vector<int>::iterator pos = find(v.begin(), v.end(), 3);

	if (pos != v.end())
		v.erase(pos);
		*/

	int n, k;

	cin >> n >> k;

	for (int i = 2; i <= n; i++)
		v.push_back(i);

	int curr = 0;

	while (true)
	{
		int s = v.front();
		int t = 0;

		while (t <= v.back())
		{
			t += s;
			//cout << t << endl;

			vector<int>::iterator pos = find(v.begin(), v.end(), t);

			if (pos != v.end())
			{
				v.erase(pos);
				curr++;

				if (curr == k)
				{
					cout << t << endl;
					return 0;
				}
			}
		}
	}
}
