#include <iostream>

using namespace std;

int main()
{
    int n;
    int total = 0;

    cin >> n;

    for (int i = 1; i < n; i++)
        if (i % 3 == 0 || i % 5 == 0)
            total += i;

    cout << total << endl;

    return 0;
}
