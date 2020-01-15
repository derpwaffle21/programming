#include <iostream>

using namespace std;

int main()
{
    int n;
    long long p[100];

    p[0] = 1;
    p[1] = 1;
    p[2] = 1;

    cin >> n;

    for (int i = 3; i < n; i++)
        p[i] = p[i - 3] + p[i - 2];

    cout << p[n - 1] << endl;

    return 0;
}
