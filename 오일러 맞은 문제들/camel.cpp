#include <iostream>

using namespace std;

int main(void)
{
	string s;

	cin >> s;

	for (int i = 90; i >= 65; i--)
	{
		char c = char(i);

		for (int j = 0; j < signed(s.size()); j++)
		{
			if (s.at(j) == c)
			{
				s.erase(j, 1);
				j--;
				cout << s << endl;
			}
		}
	}
}
