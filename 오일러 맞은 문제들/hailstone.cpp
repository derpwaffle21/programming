#include <iostream>

using namespace std;

int main()
{
    int n;
    int maxV = 1;

    cin >> n;

    while (n != 1)
    {
        if (n > maxV)
            maxV = n;

        if (n % 2 == 0)
            n /= 2;
        else
            n = (n * 3) + 1;
    }

    cout << maxV << endl;

    return 0;
}
