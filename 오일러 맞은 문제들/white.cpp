#include <iostream>

using namespace std;

int main()
{
    int chess[6] = { 1, 1, 2, 2, 2, 8 };

    for (int i = 0; i < 6; i++)
    {
        int n;

        cin >>  n;

        cout << chess[i] - n << ' ';
    }

    cout << endl;

    return 0;
}
