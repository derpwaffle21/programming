#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int best = 0;
    int total = 0;

    for (int i = 0; i < 10; i++)
    {
        int t;

        cin >> t;

        total += t;

        if (abs(100 - total) <= abs(100 - best))
            best = total;
    }

    cout << best << endl;

    return 0;
}
