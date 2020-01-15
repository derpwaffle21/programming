#include <iostream>

using namespace std;

int main(void)
{
    int n;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int t;

        cin >> t;

        for (int j = i; j > i - t; j--)
            arr[j] = arr[j - 1];

        arr[i - t] = i + 1;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    cout << endl;


    return 0;
}
