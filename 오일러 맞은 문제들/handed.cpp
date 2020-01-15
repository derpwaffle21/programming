#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool homework[30];

    for (int i = 0; i < 30; i++)
        homework[i] = false;

    for (int i = 0; i < 28; i++)
    {
        int t;

        cin >> t;
        homework[t - 1] = true;
    }

    for (int i = 0; i < 30; i++)
        if (!homework[i])
            cout << i + 1 << endl;

    return 0;
}
