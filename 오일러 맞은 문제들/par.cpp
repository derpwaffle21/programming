#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	for (int i = 0; i < 2; i++)
	{
		string s;
		bool f = true;
		stack<char> st;

		cin >> s;

		for (int j = 0; j < s.size(); j++)
		{
			char c = s.at(j);

			if (c == '(')
			{
				st.push('(');
			}
			else
			{
				if (!st.empty())
					st.pop();
				else
					f = false;
			}
		}

		if (f&& st.empty())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
