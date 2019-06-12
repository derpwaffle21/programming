#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    for (int i = 0; i < 10000; i++)
    {
        if (i == (i % 2 == 0 ? a : b))
        {
            cout << 1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}
