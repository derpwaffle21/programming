#include <iostream>

using namespace std;

int main()
{
    int aWin = 0, bWin = 0;
    int a[10], b[10];

    for (int i = 0; i < 10; i++)
        cin >> a[i];

    for (int i = 0; i < 10; i++)
        cin >> b[i];

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > b[i])
            aWin++;
        else if (b[i] > a[i])
            bWin++;
    }

    if (aWin > bWin)
        cout << "A" << endl;
    else if (bWin > aWin)
        cout << "B" << endl;
    else
        cout << "D" << endl;

    return 0;
}
