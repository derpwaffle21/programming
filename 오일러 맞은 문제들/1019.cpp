#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>
#include <numeric>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n;
	int evenNum = 0, oddNum = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;

		cin >> num;

		if (num % 2 == 0)
			evenNum++;
		else
			oddNum++;
	}

	cout << evenNum << endl;
	cout << oddNum << endl;

	return 0;
}
