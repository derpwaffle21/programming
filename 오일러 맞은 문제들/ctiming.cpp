#include <iostream>

using namespace std;

int main()
{
    int dt, ht, mt;
    int d = 11, h = 11, m = 11;

    cin >> dt >> ht >> mt;

    if (mt + (ht * 100) + (dt * 10000) < 111111)
    {
        cout << -1 << endl;
        return 0;
    }

    cout << ((dt - d) * 1440) + ((ht -h ) * 60) + (mt - m) << endl;

    return 0;
}
