#include <iostream>

using namespace std;

int main()
{
	int aWin = 0, bWin = 0;
	int a[10], b[10];
	int aLastGame = 0;

	for (int i = 0; i < 10; i++)
		cin >> a[i];

	for (int i = 0; i < 10; i++)
		cin >> b[i];

	for (int i = 0; i < 10; i++)
	{
		if (a[i] > b[i])
		{
			aWin += 3;
			aLastGame = 1;
		}
		else if (b[i] > a[i])
		{
			bWin += 3;
			aLastGame = -1;
		}
		else
		{
			aWin += 1;
			bWin += 1;
		}
	}

	cout << aWin << ' ' << bWin << endl;

	if (aWin > bWin)
	{
		cout << 'A' << endl;
	}
	else if (bWin > aWin)
	{
		cout << 'B' << endl;
	}
	else
	{
		if (aLastGame == 1)
			cout << 'A' << endl;
		else if (aLastGame == -1)
			cout << 'B' << endl;
		else
			cout << 'D' << endl;
	}
}
