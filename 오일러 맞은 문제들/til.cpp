#include <iostream>

using namespace std;

int main()
{
    int n;
    long long arr[250];

    cin >> n;

    for (int i = 0; i < n; i++)
        arr[i] = 0;

    arr[0] = 1;
    arr[1] = 3;

    for (int i = 2; i < n; i++)
    {
        arr[i] += arr[i - 2] * 2 + arr[i - 1];

        if (arr[i] >= 1000000000)
            arr[i] %= 1000000000;
    }

    cout << arr[n - 1] % 1000000000 << endl;

    return 0;
}
