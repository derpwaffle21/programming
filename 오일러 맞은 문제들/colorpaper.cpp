#include <iostream>

using namespace std;

bool board[128][128];
int w = 0, b = 0;

void process(int x, int y, int s)
{
    bool o = board[x][y];
    bool cnt = true;

    for (int i = x; i < x + s; i++)
    {
        for (int j = y; j < y + s; j++)
        {
            if (board[i][j] != o)
            {
                cnt = false;
                break;
            }
        }
    }

    if (cnt)
    {
        if (board[x][y])
            b++;
        else
            w++;
    }
    else
    {
        process(x, y, s / 2);
        process(x + (s / 2), y, s / 2);
        process(x, y + (s / 2), s / 2);
        process(x + (s / 2), y + (s / 2), s / 2);
    }
}

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    process(0, 0, n);

    cout << w << endl;
    cout << b << endl;

    return 0;
}
