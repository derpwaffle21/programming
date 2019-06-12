#include <iostream>

using namespace std;

int main()
{
    int n;
    int a = 1;
    int total = 1;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
            a++;

        total += a;
    }

    cout << total << endl;

    return 0;
}
