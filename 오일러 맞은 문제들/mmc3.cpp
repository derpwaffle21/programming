#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int t = 1;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        t *= 2;

        if (t >= 100)
            t -= 100;
    }

    cout << t << endl;

    return 0;
}
