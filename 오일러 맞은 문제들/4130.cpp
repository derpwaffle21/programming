#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

const int RIPED = 1;
const int N_RIPED = 0;
const int EMPTY = -1;

class pos
{
public:
	int x;
	int y;

	pos(int _x, int _y) : x(_x), y(_y)
	{

	}
};

int moveX[4] = { 0, 1, 0, -1 };
int moveY[4] = { -1, 0, 1, 0 };

int** map;

int main(void)
{
	int width, height;
	queue<pos> q;
	int left = 0;

	cin >> width >> height;

	map = new int* [height];

	for (int i = 0; i < height; i++)
		map[i] = new int[width];

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cin >> map[i][j];

			if (map[i][j] == RIPED)
				q.push(pos(j, i));
			else if (map[i][j] == N_RIPED)
				left++;
		}
	}

	int res = 0;

	if (left == 0)
	{
		cout << 0 << endl;
		return 0;
	}

	while (!q.empty())
	{
		int qSize = q.size();

		for (int i = 0; i < qSize; i++)
		{
			pos t = q.front();
			q.pop();

			for (int j = 0; j < 4; j++)
			{
				int newX = t.x + moveX[j];
				int newY = t.y + moveY[j];

				if (newX >= 0 && newX < width && newY >= 0 && newY < height)
				{
					if (map[newY][newX] == N_RIPED)
					{
						map[newY][newX] = RIPED;
						q.push(pos(newX, newY));
						left--;
					}
				}
			}
		}

		res++;
	}

	if (left == 0)
		cout << res - 1 << endl;
	else
		cout << -1 << endl;

	return 0;
}
