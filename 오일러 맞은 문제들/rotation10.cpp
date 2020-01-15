#include <iostream>

using namespace std;

int main()
{
    int d;
    int total = 0;

    cin >> d;

    for (int i = 0; i < 5; i++)
    {
        int t;

        cin >> t;

        if (d == t)
            total++;
    }

    cout << total << endl;

    return 0;
}
