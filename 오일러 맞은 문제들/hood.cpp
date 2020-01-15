#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	int n, s, k;
	queue<int> left;

	cin >> n >> s >> k;

	for (int i = s; i < s + n; i++)
		left.push((i > n) ? i - n : i);

	int counter = 0;

	while (left.size() != 1)
	{
		int t = left.front();
		left.pop();
		counter++;

		if (counter % k != 0)
			left.push(t);
	}

	cout << left.front() << endl;
}
