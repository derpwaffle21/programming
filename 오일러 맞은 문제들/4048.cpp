#include <iostream>
#include <sstream>
#include <climits>

using namespace std;

int toInt(string s)
{
	stringstream ss(s);
	int t;
	ss >> t;

	return t;
}

string toString(int n)
{
	stringstream ss;
	ss << n;

	return ss.str();
}

int getBest(int num)
{
	int best = INT_MAX;

	for (int i = 0; i < 4; i++)
	{
		int t = num % 10;
		num /= 10;
		num += (t * 1000);

		if (best > num)
			best = num;
	}

	return best;
}

int main(void)
{
	string num;

	for (int i = 0; i < 4; i++)
	{
		char c;

		cin >> c;
		num += c;
	}

	int val = getBest(toInt(num));
	int res = 0;

	for (int i = 1111; i < val; i++)
	{
		string s = toString(i);

		if (s.find('0') == string::npos)
			if (i == getBest(i))
				res++;
	}

	cout << res + 1 << endl;

	return 0;
}
