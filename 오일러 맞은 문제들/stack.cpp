#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> s;
	int com = -1;
	int n;

	cin >> n;

	while (com != 0)
	{
		cin >> com;

		if (com == 1)
		{
			if (s.size() != n)
			{
				int t;

				cin >> t;
				s.push(t);
			}
		}
		else if (com == 2)
		{
			if (!s.empty())
				s.pop();
		}
	}

	cout << s.size() << endl;

	while (!s.empty())
	{
		cout << s.top() << ' ';
		s.pop();
	}

	cout << endl;
}
