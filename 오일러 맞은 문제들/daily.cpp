#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int money[n + 1];
    int maxVal = 1;

    money[1] = 1;
    money[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        if (i % 2 == 0)
            money[i] = money[i / 2];
        else
            money[i] = money[int(i / 2)] + money[int(i / 2) + 1];

        if (money[i] > maxVal)
            maxVal = money[i];
    }

    cout << maxVal << endl;

    return 0;
}
