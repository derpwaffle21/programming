#include <iostream>

using namespace std;

int main()
{
    int bestCook, bestScore = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        int score[4];

        for (int j = 0; j < 4; j++)
            cin >> score[j];

        int totalScore = score[0] + score[1] + score[2] + score[3];

        if (totalScore > bestScore)
        {
            bestCook = i + 1;
            bestScore = totalScore;
        }
    }

    cout << bestCook << ' ' << bestScore << endl;

    return 0;
}
