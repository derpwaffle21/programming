#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int* b = new int[n];

	for (int i = 0; i < n; i++)
		cin >> b[i];

	int* reqTot = new int[n + 1];

	reqTot[0] = 0;

	for (int i = 1; i <= n; i++)
		reqTot[i] = i * b[i - 1];

	for (int i = 1; i <= n; i++)
		cout << reqTot[i] - reqTot[i - 1] << ' ';

	return 0;
}
