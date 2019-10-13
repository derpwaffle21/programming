#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>

using namespace std;

string codes[] = { "000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010" };

int getDiff(string s1, string s2)
{
	int res = 0;

	for (int i = 0; i < 6; i++)
		if (s1[i] != s2[i])
			res++;

	return res;
}

char getChar(string code)
{
	for (int i = 0; i < 8; i++)
	{
		if (code == codes[i])
			return 'A' + i;
	}

	for (int i = 0; i < 8; i++)
	{
		if (getDiff(code, codes[i]) == 1)
			return 'A' + i;
	}

	return 'N';
}

int main(void)
{
	int n;

	cin >> n;

	string s;

	cin >> s;

	string res = "";

	for (int i = 0; i < n; i++)
	{
		string code = s.substr(i * 6, 6);


		if (getChar(code) != 'N')
		{
			res += getChar(code);
		}
		else
		{
			cout << i + 1 << endl;
			return 0;
		}
	}

	cout << res << endl;

	return 0;
}
