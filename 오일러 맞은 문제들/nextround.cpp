#include <iostream>

using namespace std;

int main()
{
	int n, k;
	int* arr;

	cin >> n >> k;

	arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int req = arr[k - 1];
	int cnt = 0;

	for (int i = 0; i < n; i++)
		if (arr[i] >= req && arr[i] != 0)
			cnt++;

	cout << cnt << endl;
}
