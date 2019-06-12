#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n, m = 2;
    int counter = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        arr[i] = 0;

    while (true)
    {
        for (int i = 0; i < n; i++)
            printf("%d", arr[i]);

        printf("\n");

        counter++;

        bool con = false;

        for (int i = 0; i < n; i++)
            if (arr[i] != 1)
                con = true;

        if (!con)
            break;

        arr[n - 1]++;

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > 1)
            {
                arr[i] = 0;
                arr[i - 1]++;
            }
        }
    }

    printf("%d\n", counter);

    return 0;
}
