#include <iostream>

using namespace std;

int main(void)
{
	int money;
	int change = 0;

	cin >> money;

	while (money != 0)
	{
		if (money >= 5000)
			money -= 5000;
		else if (money >= 1000)
			money -= 1000;
		else if (money >= 500)
			money -= 500;
		else if (money >= 100)
			money -= 100;
		else if (money >= 50)
			money -= 50;
		else if (money >= 10)
			money -= 10;
		else if (money >= 5)
			money -= 5;
		else
			money--;

		change++;
	}

	cout << change << endl;
}
