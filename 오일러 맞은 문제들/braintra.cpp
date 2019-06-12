#include <iostream>

using namespace std;

int main()
{
    int people = 0;
    int maxV = 0;

    for (int i = 0; i < 4; i++)
    {
        int out, in;

        cin >> out;
        people -= out;

        cin >> in;
        people += in;

        if (people > maxV)
            maxV = people;
    }

    cout << maxV << endl;

    return 0;
}
