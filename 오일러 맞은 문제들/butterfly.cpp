#include <iostream>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    int arr[n * 2 - 1][n * 2 - 1];

    for (int i = 0; i < n * 2 - 1; i++)
        for (int j = 0; j < n * 2 - 1; j++)
            arr[i][j] = 0;

    for (int i = 0; i < n * 2 - 1; i++)
        for (int j = n - 1 - abs(n - 1 - i); j <= ((n - 1) * 2) - (n - 1 - abs(n - 1 - i)); j++)
            arr[j][i] = n - abs(n - 1 - i);

    for (int i = 0; i < n * 2 - 1; i++)
    {
       // cout << n - 1 - abs(n - 1 - i) << ' ' <<  ((n - 1) * 2) - (n - 1 - abs(n - 1 - i)) << endl;

        for (int j = 0; j < n * 2 - 1; j++)
        {
            if (arr[i][j] == 0)
                cout << ' ';
            else
                cout << arr[i][j] % 10;
        }

        cout << endl;
    }

    return 0;
}
