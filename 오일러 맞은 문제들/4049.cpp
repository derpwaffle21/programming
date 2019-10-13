#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> res;
bool solved = false;

void check(vector<int> path, int depth)
{
	if (depth >= n)
	{
		res = path;
		solved = true;
		return;
	}

	for (int i = n; i > 0; i--)
	{
		bool ok = true;

		for (int j = 0; j < depth; j++)
		{
			if (path[j] - i == j - depth || path[j] - i == depth - j || i == path[j])
			{
				ok = false;
				break;
			}
		}
		
		if (solved)
			return;

		if (ok)
		{
			path.push_back(i);
			check(path, depth + 1);
			path.pop_back();
		}
	}
}

int main(void)
{
	cin >> n;

	check(vector<int>(), 0);

	for (vector<int>::iterator it = res.begin(); it < res.end(); it++)
		cout << *it << ' ';

	return 0;
}
