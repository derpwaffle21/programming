#include <iostream>

using namespace std;

int main()
{
    int n;
    char a, b, c;

    cin >> n;
    cin >> a >> b >> c;

    cout << c << endl;

    for (int i = 0; i < n - 2; i++)
    {
        cout << a;

        for (int j = 0; j < i; j++)
            cout << ' ';

        cout << c << endl;
    }

    cout << a;

    for (int i = 0; i < n - 1; i++)
        cout << b;

    cout << endl;

    return 0;
}
