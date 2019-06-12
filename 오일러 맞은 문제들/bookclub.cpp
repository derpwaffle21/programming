#include <iostream>

using namespace std;

int main(void)
{
    int n, nq, p;

    cin >> n >> nq >> p;

    int questions[n][nq];
    int answers[p][2];
    int cnt = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < nq; j++)
            cin >> questions[i][j];

    for (int i = 0; i < p; i++)
    {
        cin >> answers[i][0];
        cin >> answers[i][1];
    }

    for (int i = 0; i < n; i++)
    {
        bool f = false;

        for (int j = 0; j < p; j++)
        {
            if (questions[i][answers[j][0] - 1] != answers[j][1])
            {
                f = true;
                break;
            }
        }

        if (f)
            continue;

        cnt++;
    }

    cout << cnt << endl;

    return 0;
}
