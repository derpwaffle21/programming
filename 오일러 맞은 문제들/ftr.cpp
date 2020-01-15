#include <iostream>

using namespace std;

int main()
{
    int n;
    int total = 1;

    cin >> n;

    for (int i = 2; i <= n; i++)
        total *= i;

    cout << total << endl;

    return 0;
}
