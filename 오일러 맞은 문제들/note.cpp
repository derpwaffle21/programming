#include <iostream>

using namespace std;

int main()
{
    int note[8];

    for (int i = 0; i < 8; i++)
        cin >> note[i];

    bool isMixed = false;

    for (int i = 2; i < 8; i++)
    {
        if (note[i] - note[i - 1] != note[i - 1] - note[i - 2])
        {
            isMixed = true;
            break;
        }
    }

    if (isMixed)
        cout << "mixed" << endl;
    else if (note[0] == 1)
        cout << "ascending" << endl;
    else
        cout << "descending" << endl;

    return 0;
}
