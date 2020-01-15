#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int com;

		cin >> com;

		if (com == 1)
		{
			int t;

			cin >> t;
			q.push(t);
		}
		else
		{
			if (!q.empty())
				q.pop();
		}
	}

	if (!q.empty())
    {
        cout << q.size() << endl;
        cout << q.front() << ' ' << q.back() << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
