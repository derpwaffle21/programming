#include <iostream>

using namespace std;

int main()
{
    int people = 0;
    int maxV = 0;

    for (int i = 0; i < 10; i++)
    {
        int l, t;

        cin >> l >> t;

        people -= l;
        people += t;

        if (people > maxV)
            maxV = people;
    }

    cout << maxV << endl;

    return 0;
}
