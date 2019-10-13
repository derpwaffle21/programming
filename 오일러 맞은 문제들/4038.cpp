#include <iostream>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	int** classHist = new int*[n];
	int* sameClassNum = new int[n];
	bool** wasSameClass = new bool* [n];

	for (int i = 0; i < n; i++)
		classHist[i] = new int[5];

	for (int i = 0; i < n; i++)
		sameClassNum[i] = 0;

	for (int i = 0; i < n; i++)
		wasSameClass[i] = new bool[n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			wasSameClass[i][j] = false;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 5; j++)
			cin >> classHist[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (i != k)
				{
					if (classHist[i][j] == classHist[k][j])
					{
						if (!wasSameClass[i][k])
						{
							sameClassNum[i]++;
							wasSameClass[i][k] =  true;
						}
					}
				}
			}
		}
	}

	int maxVal = -1;
	int maxPos;

	for (int i = 0; i < n; i++)
	{
		if (maxVal < sameClassNum[i])
		{
			maxVal = sameClassNum[i];
			maxPos = i + 1;
		}
	}

	cout << maxPos << endl;

	return 0;
}
