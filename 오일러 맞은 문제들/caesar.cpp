#include <iostream>

using namespace std;

int main(void)
{
	string s;

	cin >> s;

	for (int i = 0; i < signed(s.size()); i++)
	{
		int c = int(s.at(i));

		c -= 3;

		if (c < 'A')
		{
			c += 26;
		}

		cout << char(c);
	}

	cout << endl;
}
