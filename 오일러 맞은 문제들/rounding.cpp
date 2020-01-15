#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;

        cin >> num;

        cout << round(float(num) / 100) * 100 << ' ' << floor(float(num) / 100) * 100 << endl;
    }

    return 0;
}
