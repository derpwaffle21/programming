#include <iostream>

using namespace std;

int main()
{
    int n;
    int total = 1;

    cin >> n;

    for (int i = 2; i <= n; i++)
        total *= i;

    cout << n << "!=(";

    for (int i = 1; i <= n; i++)
        cout << i << (i != n ? '*' : ')');

    cout << "=" << total << endl;

    return 0;
}
