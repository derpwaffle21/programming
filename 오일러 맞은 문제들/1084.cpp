#include <iostream>

using namespace std;

int main()
{
	int numbers[15];
	int inputCnt = 0;
	int num;
	int cnt = 0;

	do
	{
		cin >> num;
		numbers[inputCnt++] = num;
	} while (num != 0);

	for (int i = 0; i < inputCnt - 1; i++)
	{
		for (int j = 0; j < inputCnt - 1; j++)
		{
			if (numbers[i] * 2 == numbers[j])
				cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
