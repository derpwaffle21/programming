#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int* blocks = new int[n];
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> blocks[i];
		sum += blocks[i];
	}

	int avg = sum / n;

	int diff = 0;

	for (int i = 0; i < n; i++)
		diff += abs(blocks[i] - avg);

	cout << diff / 2 << endl;

	return 0;
}
