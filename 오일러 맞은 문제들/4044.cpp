#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main(void)
{
	queue<int> people;
	int n, s, k;

	cin >> n >> s >> k;

	for (int i = 1; i <= n; i++)
		people.push(i);

	while (people.front() != s)
	{
		int t = people.front();
		people.pop();
		people.push(t);
	}

	int cnt = 0;

	while (people.size() != 1)
	{
		cnt++;

		if (cnt == k)
		{
			people.pop();
			cnt = 0;
			continue;
		}
		else
		{
			int t = people.front();
			people.pop();
			people.push(t);
		}
	}

	cout << people.front();

	return 0;
}
