#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
	int a, b;
	int  happyDay = 0, currDay = 1;
	bool found = false;

	do
	{
		cin >> a >> b;

		if (a + b > 8 && !found)
		{
			happyDay = currDay;
			found = true;
		}

		currDay++;
	} while (a != 0 || b != 0);

	cout << happyDay << endl;

	return 0;
}
