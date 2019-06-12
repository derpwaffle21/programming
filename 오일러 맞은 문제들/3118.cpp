#include <iostream>

using namespace std;

//  < < > > < <
// 7 8 9 6 3 4 5

int biggest(bool* arr)
{
	for (int i = 9; i >= 0; i--)
		if (!arr[i])
			return i;

	return -1;
}

int smallest(bool* arr)
{
	for (int i = 0; i < 10; i++)
		if (!arr[i])
			return i;

	return -1;
}

int main()
{
	int n;

	cin >> n;

	bool* bigger = new bool[n];
	bool* used = new bool[10];

	for (int i = 0; i < 10; i++)
		used[i] = false;

	for (int i = 0; i < n; i++)
	{
		char c;

		cin >> c;

		if (c == '<')
			bigger[i] = true;
		else if (c == '>')
			bigger[i] = false;
	}

	for (int i = 0; i < n; i++)
	{
		int combo = 1;

		for (int j = i + 1; j < n; j++)
		{
			if (bigger[i] != bigger[j])
				break;

			combo++;
		}

		int j;

		if (bigger[i])
		{
			for (j = 9; j >= 0; j--)
			{
				if (!used[j])
				{
					combo--;

					if (combo == -1)
						break;
				}
			}
		}
		else
		{
			j = biggest(used);
		}

		cout << j;
		used[j] = true;
	}

	cout << biggest(used) << endl;

	for (int i = 0; i < 10; i++)
		used[i] = false;

	for (int i = 0; i < n; i++)
	{
		int combo = 1;

		for (int j = i + 1; j < n; j++)
		{
			if (bigger[i] != bigger[j])
				break;

			combo++;
		}

		int j;

		if (!bigger[i])
		{
			for (j = 0; j < 10; j++)
			{
				if (!used[j])
				{
					combo--;

					if (combo == -1)
						break;
				}
			}
		}
		else
		{
			j = smallest(used);
		}

		cout << j;
		used[j] = true;
	}

	cout << smallest(used) << endl;

	return 0;
}
