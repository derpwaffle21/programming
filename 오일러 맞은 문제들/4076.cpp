#include <iostream>
#include <algorithm>

using namespace std;

int n;
bool found = false;
string best;

void findBest(string num, int depth)
{
	if (found)
		return;

	if (depth == n)
	{
		best = num;
		found = true;
		return;
	}

	for (int i = 1; i < 4; i++)
	{
		bool vaild = true;

		for (int testLen = 1; testLen <= ceil(double(depth) / 2); testLen++)
		{
			string a = num.substr((depth + 1) - (testLen * 2), testLen - 1);
			string b = num.substr((depth + 1) - (testLen), testLen - 1);

			if (a == b && (num[depth - testLen] - 48 == i))
			{
				vaild = false;
				break;
			}
		}

		if (vaild)
		{
			num += (i + 48);

			findBest(num, depth + 1);

			num.erase(num.end() - 1);
		}
	}
}

int main(void)
{
	cin >> n;
	findBest(string(), 0);

	cout << best << endl;

	return 0;
}
