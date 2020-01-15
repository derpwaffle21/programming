#include <iostream>

using namespace std;

int main()
{
    int maxVal = INT_MIN, maxN;

    for (int i = 0; i < 9; i++)
    {
        int a;

        cin >> a;

        if (a > maxVal)
        {
            maxVal = a;
            maxN = i + 1;
        }
    }

    cout << maxVal << endl;
    cout << maxN << endl;

    return 0;
}
