#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>
#include <numeric>

using namespace std;

int n;
int answer = 0;

void findAll(int curr)
{
	if (curr == n)
		answer++;
	else if (curr > n)
		return;

	findAll(curr + 1);
	findAll(curr + 2);
	findAll(curr + 3);
}

int main(void)
{
	cin >> n;

	findAll(0);

	cout << answer << endl;

	return 0;
}
