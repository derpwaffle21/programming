#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

class p
{
public:
	int number;
	int total = 0;
	int p3 = 0;
	int p2 = 0;

	bool operator < (const p& other)
	{
		if (total < other.total)
		{
			return true;
		}
		else if (total > other.total)
		{
			return false;
		}
		else
		{
			if (p3 < other.p3)
			{
				return true;
			}
			else if (p3 > other.p3)
			{
				return false;
			}
			else
			{
				if (p2 < other.p2)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
	}

	bool operator== (const p& other)
	{
		return (total == other.total && p3 == other.p3 && p2 == other.p2);
	}

	bool operator> (const p& other)
	{
		if (total > other.total)
		{
			return true;
		}
		else if (total < other.total)
		{
			return false;
		}
		else
		{
			if (p3 > other.p3)
			{
				return true;
			}
			else if (p3 < other.p3)
			{
				return false;
			}
			else
			{
				if (p2 > other.p2)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
	}
};

int main()
{
	p ps[3];

	for (int i = 0; i < 3; i++)
		ps[i].number = i + 1;

	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int score;

			cin >> score;

			ps[j].total += score;

			if (score == 3)
				ps[j].p3++;
			else if (score == 2)
				ps[j].p2++;
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (ps[i] < ps[j])
				swap(ps[i], ps[j]);
		}
	}

	if (ps[0] > ps[1])
		cout << ps[0].number << ' ';
	else
		cout << 0 << ' ';

	cout << ps[0].total << endl;

	return 0;
}
