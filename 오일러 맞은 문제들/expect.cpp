#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n, m;
    int counter = 0;

    scanf("%d%d", &n, &m);

    int arr[m];

    for (int i = 0; i < m; i++)
        arr[i] = 1;

    while (true)
    {
        bool cnt = true;

        for (int i = 0; i < m - 1; i++)
        {
            for (int j = i + 1; j < m; j++)
            {
                if (i != j && arr[i] == arr[j])
                {
                    cnt = false;
                    break;
                }
            }
        }

        if (cnt)
            counter++;

        bool con = false;

        for (int i = 0; i < m; i++)
            if (arr[i] != n)
                con = true;

        if (!con)
            break;

        arr[m - 1]++;

        for (int i = m - 1; i >= 0; i--)
        {
            if (arr[i] > n)
            {
                arr[i] = 1;
                arr[i - 1]++;
            }
        }
    }

    printf("%d\n", counter);

    return 0;
}
