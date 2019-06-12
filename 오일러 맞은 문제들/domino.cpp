#include <iostream>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    int a = 0, b = 0;
    int total = 0;

    while (a != n || b != n)
    {
        b++;

        if (b > a)
        {
            b = 0;
            a++;
        }

        total += (a + b);
    }

    cout << total << endl;

    return 0;
}
