#include <iostream>

using namespace std;

int main(void)
{
	int money;
	int quater = 0, dime = 0, nickel = 0, penny = 0;

	cin >> money;

	while (money != 0)
	{
		if (money >= 25)
		{
			money -= 25;
			quater++;
		}
		else if (money >= 10)
		{
			money -= 10;
			dime++;
		}
		else if (money >= 5)
		{
			money -= 5;
			nickel++;
		}
		else
		{
			money--;
			penny++;
		}
	}

	cout << quater << ' ' << dime << ' ' << nickel << ' ' << penny << endl;
}
