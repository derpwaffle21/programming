#include <iostream>

using namespace std;

int getMiddle(int num)
{
	return (num - (int(num / 1000) * 1000) - (num % 10)) / 10;
}

int main()
{
	int * numbers = new int[10000];
	int currNum = 0;
	bool running = true;

	cin >> numbers[currNum++];

	while (running)
	{
		int t = getMiddle(numbers[currNum - 1]);

		numbers[currNum++] = t * t;

		for (int i = 0; i < currNum - 1; i++)
		{
			if (numbers[currNum - 1] == numbers[i])
			{
				running = false;
				break;
			}
		}
	}

	cout << currNum - 1 << endl;
}
