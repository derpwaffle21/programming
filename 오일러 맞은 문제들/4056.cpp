#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main(void)
{
	string s;

	cin >> s;

	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i] == '(' && s[i + 1] == ')')
		{
			s[i] = 'l';
			s.erase(s.begin() + i + 1);
		}
	}

	int overlap = 0;
	int res = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'l')
			res += overlap;
		else if (s[i] == '(')
			overlap++;
		else if (s[i] == ')')
		{
			overlap--;
			res++;
		}
	}

	cout << res << endl;

	return 0;
}
