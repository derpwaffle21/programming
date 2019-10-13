#include <iostream>
#include <algorithm>

using namespace std;

class Card
{
public:
	char color;
	int number;
};

int main(void)
{
	Card cards[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> cards[i].color >> cards[i].number;
	}

	int maxScore = 0;

	bool isSameColor = true;
	int timesSeen[10];
	int timesSeenPosition[10];

	for (int i = 0; i < 4; i++)
	{
		if (cards[i].color != cards[i + 1].color)
		{
			isSameColor = false;
			break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		timesSeen[i] = 0;
		timesSeenPosition[i] = i;
	}

	for (int i = 0; i < 5; i++)
		timesSeen[cards[i].number]++;

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (timesSeen[i] < timesSeen[j])
			{
				swap(timesSeen[i], timesSeen[j]);
				swap(timesSeenPosition[i], timesSeenPosition[j]);
			}
		}
	}

	if (isSameColor) // 색깔이 모두 같을 때
	{
		Card tmp[5];

		for (int i = 0; i < 5; i++)
			tmp[i] = cards[i];

		for (int i = 1; i < 5; i++)
		{
			Card key = tmp[i];
			int j = i - 1;

			while (j >= 0 && tmp[j].number > key.number)
			{
				tmp[j + 1] = tmp[j];
				j--;
			}

			tmp[j + 1] = key;
		}

		bool isSequential = true;

		for (int i = 0; i < 4; i++)
		{
			if (tmp[i].number + 1 != tmp[i + 1].number)
			{
				isSequential = false;
				break;
			}
		}

		if (isSequential) //숫자가 연속적(1)
		{
			int pScore = 900 + tmp[4].number;

			if (maxScore < pScore)
				maxScore = pScore;
		}
		else // 색깔이 모두 같을 때(4)
		{
			int pScore = 600 + tmp[4].number;

			if (maxScore < pScore)
				maxScore = pScore;
		}
	}

	if (timesSeen[0] == 4)	// 5장 중 4장이 같다(2)
	{
		int pScore = 800 + timesSeenPosition[0];

		if (maxScore < pScore)
			maxScore = pScore;
	}

	if (timesSeen[0] == 3 && timesSeen[1] == 2) //3장의 숫자가 같고 나머지 2장도 숫자가 같을 때(3)
	{
		int pScore = 700 + (timesSeenPosition[0] * 10) + timesSeenPosition[1];

		if (maxScore < pScore)
			maxScore = pScore;
	}

	if (timesSeen[0] == 3) // 3장의 숫자가 같을 때(6)
	{
		int pScore = 400 + timesSeenPosition[0];

		if (maxScore < pScore)
			maxScore = pScore;
	}

	if (timesSeen[0] == 2 && timesSeen[1] == 2) // 2장의 숫자가 같고 또 다른 2장의 숫자가 같을 때(7)
	{
		int bigger = max(timesSeenPosition[0], timesSeenPosition[1]);
		int smaller = min(timesSeenPosition[0], timesSeenPosition[1]);
		int pScore = 300 + (bigger * 10) + smaller;

		if (maxScore < pScore)
			maxScore = pScore;
	}

	if (timesSeen[0] == 2) // 2장의 숫자가 같을 때(8)
	{
		int pScore = 200 + timesSeenPosition[0];

		if (maxScore < pScore)
			maxScore = pScore;
	}

	if (timesSeen[0] == 1)
	{
		Card tmp[5];

		for (int i = 0; i < 5; i++)
			tmp[i] = cards[i];

		for (int i = 1; i < 5; i++)
		{
			Card key = tmp[i];
			int j = i - 1;

			while (j >= 0 && tmp[j].number > key.number)
			{
				tmp[j + 1] = tmp[j];
				j--;
			}

			tmp[j + 1] = key;
		}

		bool isSequential = true;

		for (int i = 0; i < 4; i++)
		{
			if (tmp[i].number + 1 != tmp[i + 1].number)
			{
				isSequential = false;
				break;
			}
		}

		int maxSeen = 0; // 모든 것이 아닐 때(9), (5)

		for (int i = 0; i < 10; i++)
			if (timesSeen[i] != 0 && timesSeenPosition[i] > maxSeen)
				maxSeen = timesSeenPosition[i];

		int pScore = (isSequential ? 500 : 100) + maxSeen;

		if (maxScore < pScore)
			maxScore = pScore;
	}

	cout << maxScore << endl;

	return 0;
}
