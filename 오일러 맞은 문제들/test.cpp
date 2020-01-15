#include <iostream>

using namespace std;

int main(void)
{
    int score = 0;
    int combo = 1;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;

        cin >> t;

        if (t == 1)
            score += combo++;
        else
            combo = 1;
    }

    cout << score << endl;

    return 0;
}
