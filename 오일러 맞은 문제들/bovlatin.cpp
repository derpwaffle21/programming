#include <iostream>

using namespace std;

string bovineLatin(string input)
{
	string result;

	result = input;

	if (result.at(0) == 'a' || result.at(0) == 'e' || result.at(0) == 'i' || result.at(0) == 'o' || result.at(0) == 'u')
	{
		result.append("cow");
	}
	else
	{
		char c = result.at(0);

		result.erase(result.begin());
		result += c;
		result.append("ow");
	}

	return result;
}

int main(void)
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string s;

		cin >> s;
		cout << bovineLatin(s) << endl;
	}
}
