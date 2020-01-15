#include <iostream>

using namespace std;

int main(void)
{
    int c, n;

    cin >> c >> n;
    bool fireworks[n + 1];

    for (int i = 1; i < n; i++)
        fireworks[i] = false;

    for (int i = 0; i < c; i++)
    {
        int t;

        cin >> t;


        for (int j = t; j <= n; j += t)
            fireworks[j] = true;
    }

    int cnt = 0;

    for (int i = 1; i <= n; i++)
        if (fireworks[i])
            cnt++;

    cout << cnt << endl;

    return 0;
}
