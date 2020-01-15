#include <cstdio>

int main()
{
    int n;

    scanf("%d", &n);

    printf(" *");

    for (int i = 1; i <= n; i++)
        printf("%4d", i);

    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        printf("%2d", i);

        for (int j = 1; j <= n; j++)
            printf("%4d", i * j);

        printf("\n");
    }

    return 0;
}
