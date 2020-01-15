#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int* num = new int[n];

	for (int i = 0; i < n; i++)
		cin >> num[i];

	for (int i = 0; i < n; i++)
		cout << num[i] << ' ';

	cout << endl;

	sort(num, num + n);

	for (int i = 0; i < n; i++)
		cout << num[i] << ' ';

	cout << endl;

	return 0;
}
