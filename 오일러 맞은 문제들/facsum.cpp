#include <iostream>

using namespace std;

int main()
{
    int n;
    int total = 0;

    cin >> n;

    for (int i = 1; i <= int(n / 2); i++)
        if (n % i == 0)
            total += i;

    cout << total << endl;

    return 0;
}
