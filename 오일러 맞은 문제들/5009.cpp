#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

bool* map;
int* path;
int fastest = 20000000;
int m;

void search(int p1, int p2, int currGoal, int goalNum, int depth)
{
	if (depth >= fastest)
		return;

	if (goalNum == m)
	{
		fastest = depth;
		return;
	}

	if (currGoal < p1)
	{
		search(currGoal, p2, path[goalNum + 1] - 1, goalNum + 1, depth + (p1 - currGoal));
	}
	else if (currGoal > p2)
	{
		search(p1, currGoal, path[goalNum + 1] - 1, goalNum + 1, depth + (currGoal - p2));
	}
	else
	{
		search(currGoal, p2, path[goalNum + 1] - 1, goalNum + 1, depth + (currGoal - p1));
		search(p1, currGoal, path[goalNum + 1] - 1, goalNum + 1, depth + (p2 - currGoal));
	}
}

int main(void)
{
	int n;

	cin >> n;

	int t1, t2;

	cin >> t1 >> t2;

	cin >> m;
	path = new int[m];

	for (int i = 0; i < m; i++)
		cin >> path[i];

	search(min(t1 - 1, t2 - 1), max(t1 - 1, t2 - 1), path[0] - 1, 0, 0);

	cout << fastest << endl;

	return 0;
}
