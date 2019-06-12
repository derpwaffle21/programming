#include <cstdio>

using namespace std;

int n;
int cnt = 0;
int weights[3] = {2, 3, 5};

void process(int total, int arr[3], int depth)
{
    if (depth == 3)
    {
        if (total == n)
        {
            for (int i = 0; i < 3; i++)
                printf("%d ", arr[i]);

            printf("\n");
            cnt++;
        }

        return;
    }

    if (total >= n)
        return;

    for (int i = 1; i <= 10; i++)
    {
        arr[depth] = i;
        process(total + (weights[depth] * i), arr, depth + 1);
    }
}

int main()
{
    int arr[3] = {0, 0, 0};

    scanf("%d", &n);

    process(0, arr, 0);
    printf("%d\n", cnt);

    return 0;
}
