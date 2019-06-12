#include <iostream>

using namespace std;

string calc(string s, int s1, int len, int s2)
{
	int f = 0;

	for (int i = 0; i < len; i++)
	{
	retry:

		if (s[s1 + i] != s[s2 + i + f])
		{
			//cout << "s[" << s1 + i << "]=" << s[s1 + i] << " and " << "s[" << s2 + i + f << "]=" << s[s2 + i + f] << endl;
			f++;

			if (f > 1)
			{
				return string();
			}

			goto retry;
		}
	}

	return s.substr(s1, len);
}

int main(void)
{
	string s;
	int n;

	cin >> n;
	cin >> s;

	if (n % 2 == 0)
	{
		cout << "NOT POSSIBLE" << endl;
		return 0;
	}

	int len = (n - 1) / 2;

	//cout << s.substr(0, len) << " 기준점" << endl;
	string res1 = calc(s, 0, len, len);
	//cout << s.substr(len + 1, len) << " 기준점" << endl;
	string res2 = calc(s, len + 1, len, 0);

	//cout << s.substr(0, len) << ", " << s.substr(len + 1, len) << endl;

	if (res1.empty() && res2.empty())
		cout << "NOT POSSIBLE" << endl;
	else if (res1.empty())
		cout << res2 << endl;
	else if (res2.empty())
		cout << res1 << endl;
	else if (res1 == res2)
		cout << res1 << endl;
	else
		cout << "NOT UNIQUE" << endl;

	return 0;
}
