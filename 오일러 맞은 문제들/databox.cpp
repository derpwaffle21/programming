#include <iostream>

using namespace std;

int main()
{
    int x, n;
    int tot = 0;

    cin >> x >> n;

    for (int i = 0; i < n; i++)
    {
        int t;

        cin >> t;
        tot += t;
    }

    cout << x * (n + 1) - tot << endl;

    return 0;
}
