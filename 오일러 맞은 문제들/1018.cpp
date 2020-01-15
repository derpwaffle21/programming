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
	int priceA, incA, priceB, decB;

	cin >> priceA >> incA >> priceB >> decB;

	while (priceA < priceB)
	{
		priceA += incA;
		priceB -= decB;
	}

	cout << max(priceA, priceB) << endl;

	return 0;
}
