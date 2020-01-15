#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, w ,h;

    cin >> n >> w >> h;
    int m = int(sqrt((w * w) + (h * h)));

    for (int i = 0; i < n; i++)
    {
        int num;

        cin >> num;

        if (num <= m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
