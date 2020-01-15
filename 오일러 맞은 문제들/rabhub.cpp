#include <iostream>

using namespace std;

int main()
{
    int p, q;

    cin >> p >> q;

    int parr[p];
    int qarr[q];
    int pt = 0, qt = 0;

    for (int i = 1; i <= p; i++)
        if (p % i == 0)
            parr[pt++] = i;

    for (int i = 1; i <= q; i++)
        if (q % i == 0)
            qarr[qt++] = i;

    for (int i = 0; i < pt; i++)
        for (int j = 0; j < qt; j++)
            cout << parr[i] << ' ' << qarr[j] << endl;

    return 0;
}
