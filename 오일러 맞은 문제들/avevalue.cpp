#include <iostream>
#include <algorithm>

using namespace std;

int avg(int * arr, int len)
{
    int total = 0;

    for (int i = 0; i < len; i++)
        total += arr[i];

    return total / len;
}

int median(int * arr, int len)
{
    for (int i = 0; i < len - 1; i++)
        for (int j = i + 1; j < len; j++)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);

    return arr[int(len / 2)];
}

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << avg(arr, 5) << endl;
    cout << median(arr, 5) << endl;

    return 0;
}
