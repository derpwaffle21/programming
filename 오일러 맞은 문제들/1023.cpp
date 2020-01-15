#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int* numbers = new int[n];

	for (int i = 0; i < n; i++)
		cin >> numbers[i];

	cout << *max_element(numbers, numbers + n) << endl;
	cout << *min_element(numbers, numbers + n) << endl;

	return 0;
}
