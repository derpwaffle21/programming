#include <iostream>

using namespace std;

int main()
{
    int row, col;
    int maxVal = INT_MIN;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int a;

            cin >> a;

            if (a > maxVal)
            {
                maxVal = a;

                row = i + 1;
                col = j + 1;
            }
        }
    }

    cout << maxVal << endl;
    cout << row << ' ' << col << endl;

    return 0;
}
