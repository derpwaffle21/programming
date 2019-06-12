#include <cmath>
#include <iostream>

using namespace std;

int main(void)
{
	double money = 505;
	int interest, year;

	cin >> interest >> money >> year;
	cout.precision(17);

	for (int i = 0; i < year; i++)
		money += (money * (0.01 * interest));

	cout << floor(money) << endl;
}
