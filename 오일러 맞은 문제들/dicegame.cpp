#include <iostream>

using namespace std;

int diceResult(int a, int b, int c)
{
    if (a == b && b == c)
        return 10000 + (a * 1000);
    else if (a == b)
        return 1000 + (a * 100);
    else if (b == c)
        return 1000 + (b * 100);
    else if (c == a)
        return 1000 + (c * 100);
    else
        return (a > b ? (a < c ? c : a) : (b < c ? c : b)) * 100;
}

int main()
{
    int n;
    int best = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b, c;

        cin >> a >> b >> c;

        int score = diceResult(a, b, c);

        if (score > best)
            best = score;
    }

    cout << best << endl;

    return 0;
}
