#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[20];

    for (int i = 0; i < 20; i++)
        arr[i] = i + 1;

    for (int i = 0; i < 10; i++)
    {
        int s, e;

        cin >> s >> e;

        for (int j = 0; j <= (e - s) / 2; j++)
            swap(arr[s + j - 1], arr[e - j - 1]);
    }

    for (int i = 0; i < 20; i++)
        cout << arr[i] << ' ';

    cout << endl;

    return 0;
}
