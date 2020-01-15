#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int c;

    cin >> a >> b;
    cin >> c;

    b += c;

    while (b >= 60)
    {
        b -= 60;
        a++;
    }

    while (a >= 24)
    {
        a -= 24;
    }

    cout << a << ' ' << b << endl;

    return 0;
}
