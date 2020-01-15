#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int num[10];

	for (int i = 0; i < 10; i++)
		cin >> num[i];

	sort(num, num + 10);
	cout << num[7] << endl;

	return 0;
}
