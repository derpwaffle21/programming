#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m, n;
    int p = -1, total = 0;

    cin >> m >> n;

    for (int i = n; i >= m; i--)
    {
        if (sqrt(i) == floor(sqrt(i)))
        {
            total += i;
            p = i;
        }
    }

    if (p == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout <<  total << endl;
        cout << p << endl;
    }

    return 0;
}
