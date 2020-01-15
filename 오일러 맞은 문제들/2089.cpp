#include <iostream>

using namespace std;

int main()
{
	int s1, s2, s3;

	cin >> s1 >> s2 >> s3;

	int* cnt = new int[81];

	for (int i = 1; i <= 80; i++)
		cnt[i] = 0;

	for (int i = 1; i <= s1; i++)
		for (int j = 1; j <= s2; j++)
			for (int k = 1; k <= s3; k++)
				cnt[i + j + k]++;

	int maxVal = 0;
	int maxPos;

	for (int i = 1; i <= 80; i++)
	{
		if (cnt[i] > maxVal)
		{
			maxVal = cnt[i];
			maxPos = i;
		}
	}

	cout << maxPos << endl;

	return 0;
}
