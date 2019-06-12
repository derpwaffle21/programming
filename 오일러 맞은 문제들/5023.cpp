#include <iostream>

using namespace std;

bool h[31][30 * 500 + 1];
int n, weights[30];

void p(int depth, int sum)
{
	if (depth > n)
		return;

	sum = ((sum > 0) ? sum : -sum);

	if (h[depth][sum])
		return;

	h[depth][sum] = true;

	p(depth + 1, sum);
	p(depth + 1, sum + weights[depth]);
	p(depth + 1, sum - weights[depth]);
}

int main(void)
{
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> weights[i];

	p(0, 0);

	int t;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int num;

		cin >> num;

		if (num > 30 * 500)
			cout << "N ";
		else if (h[n][num])
			cout << "Y ";
		else
			cout << "N ";
	}

	cout << endl;
}
