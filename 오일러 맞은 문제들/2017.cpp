#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int k[3];

	cin >> k[0] >> k[1] >> k[2];

	sort(k, k + 3);

	int a1 = k[1] - k[0];
	int a2 = k[2] - k[1];

	cout << max(a1, a2) - 1 << endl;

	return 0;
}
