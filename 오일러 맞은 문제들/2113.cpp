#include <iostream>

using namespace std;

int main()
{
	int c;
	int n;

	cin >> c;
	cin >> n;

	int* price = new int[n];

	for (int i = 0; i < n; i++)
		cin >> price[i];

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (price[i] + price[j] == c)
				cout << i + 1 << ' ' << j + 1 << endl;

	return 0;
}
