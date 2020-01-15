#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << (*max_element(arr, arr + n) - *min_element(arr, arr + n)) * 2 << endl;

	return 0;
}
