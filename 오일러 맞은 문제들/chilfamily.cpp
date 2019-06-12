#include <cstdio>
#include <iostream>

using namespace std;

int minArr(int * arr, int s)
{
    int m = arr[0];

    for (int i = 1; i < s; i++)
        if (arr[i] < m)
            m = arr[i];

    return m;
}

int maxArr(int * arr, int s)
{
    int m = arr[0];

    for (int i = 1; i < s; i++)
        if (arr[i] > m)
            m = arr[i];

    return m;
}

int main()
{
    int n;
    int result = 2147483647;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int s = minArr(arr, n);
    int e = maxArr(arr, n);

    int si = s + ((s + e) / 4);
    int ei = e - ((s + e) / 4);

    for (int i = si; i <= ei; i++)
    {
        int total = 0;

        for (int j = 0; j < n; j++)
            total += abs(arr[j] - i);

        if (total < result)
            result = total;
    }

    printf("%d\n", result);

    return 0;
}
