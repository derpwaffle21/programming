#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> alive;
	int n, m, k;

	cin >> n >> m >> k;

	for (int i = m - 1; i < n + m - 1; i++)
		alive.push((i % n) + 1);

	int counter = k - 1;

	while (alive.size() != 1)
	{
		int t = alive.front();

		counter++;
		alive.pop();

		if (counter % k == 0)
			cout << t << ' ';
		else
			alive.push(t);
	}

	cout << endl;
	cout << alive.front() << endl;
}
