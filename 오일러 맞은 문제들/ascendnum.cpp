#include <iostream>

using namespace std;

int main()
{
    int n;
    long long arr[250][10];
    long cnt = 0;

    cin >> n;

    for (int i = 0; i < 10; i++)
        arr[0][i] = 1;

    for (int i = 1; i < n; i++)
        for (int j = 0; j < 10; j++)
            arr[i][j] = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= j; k++)
                arr[i][j] += arr[i - 1][k];

            arr[i][j] %= 1000000000;
        }
    }

    for (int i = 0; i <= 9; i++)
        cnt += arr[n - 1][i];

    cout << cnt % 1000000000 << endl;

    return 0;
}
