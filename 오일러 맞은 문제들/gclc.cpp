#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    for (int i = (a < b ? a : b); i > 1; i--)
        if (a % i == 0 && b % i == 0)
            return i;

    return 1;
}

int lcm(int a, int b)
{
    int p = (a > b ? b : a);
    int total = p;

    while (total % a != 0 || total % b != 0)
        total += p;

    return total;
}

int main()
{
    int n, m;

    cin >> n >> m;

    cout << gcd(n, m) << endl;
    cout << lcm(n, m) << endl;

    return 0;
}
