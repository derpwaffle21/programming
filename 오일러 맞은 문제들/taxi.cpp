#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    while (a < c)
    {
        a += b;
        c -= d;
    }

    cout << a << endl;

    return 0;
}
