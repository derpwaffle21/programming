#include <iostream>
#include <algorithm>

using namespace std;

bool board[3][3];

void push(int x, int y)
{
	for (int i = max(x - 1, 0); i <= min(x + 1, 2); i++)
	{
		for (int j = max(y - 1, 0); j <= min(y + 1, 2); j++)
		{
			board[i][j] = !board[i][j];
		}
	}
}

int cnt()
{
	int c = 0;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (board[i][j])
				c++;

	return c;
}

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			char c;

			cin >> c;

			if (c == 'b')
				board[i][j] = false;
			else
				board[i][j] = true;
		}
	}

	bool backup[3][3];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			backup[i][j] = board[i][j];

	string s = "000000000";

	while (s != "111111111")
	{
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				board[i][j] = backup[i][j];

		s[0] += 1;

		for (int i = 0; i < 9; i++)
		{
			if (s[i] > '1')
			{
				s[i] = '0';
				s[i + 1]++;
			}
		}

		for (int i = 0; i < 9; i++)
		{
			if (s[i] == '1')
			{
				int x = int(i / 3);
				int y = i % 3;

				push(x, y);
			}
		}

		if (cnt() == 9)
		{
			string res;

			for (int i = 0; i < 9; i++)
			{
				if (s[i] == '1')
					res += char(i + 48) + 1;
			}

			cout << res << endl;
			return 0;
		}
	}
}
