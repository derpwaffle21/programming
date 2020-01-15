#include <iostream>

using namespace std;

int main()
{
    int maxVal = 8, maxDay = 0;

    for (int i = 0; i < 7; i++)
    {
        int a, b;

        cin >> a >> b;

        if (a + b > maxVal)
        {
            maxVal = 100;
            maxDay = i + 1;
        }
    }

    cout << maxDay << endl;

    return 0;
}
