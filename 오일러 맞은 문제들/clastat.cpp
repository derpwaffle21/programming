#include <iostream>

using namespace std;

int main()
{
	int n;
	int total = 0;

	cin >> n;
	int b = n;

	for (int i = 0; i < b; i++)
	{
		int t;

		cin >> t;

		if (t > 0)
			total += t;
		else
			n--;
	}

	float avg = float(total) / n;

	cout << int(avg * 10 + 0.5) << endl;
}
