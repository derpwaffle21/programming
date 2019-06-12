#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    for (int i = 0; i < 5; i++)
    {
        int p;

        cin >> p;
        cout << p - (a * b) << ' ';
    }

    cout << endl;

    return 0;
}
