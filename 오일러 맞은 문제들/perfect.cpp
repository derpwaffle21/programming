#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        int x;
        int total = 0;

        cin >> x;

        for (int i = 1; i <= x / 2; i++)
            if (x % i == 0)
                total += i;

        if (x > total)
            cout << "DEFICIENT" << endl;
        else if (x == total)
            cout << "PERFECT" << endl;
        else
            cout << "ABUNDANT" << endl;
    }

    return 0;
}
