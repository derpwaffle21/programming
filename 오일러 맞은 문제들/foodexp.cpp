#include <cstdio>

int main()
{
    int n, q;
    int total = 0;
    int h[50000];
    int s, e;

    scanf("%d %d", &n, &q);

    h[0] = 0;

    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &h[i]);
        h[i] += h[i - 1];
    }

    for (int i = 0; i < q; ++i)
    {
        scanf("%d %d", &s, &e);

        printf("%d\n", h[e] - h[s - 1]);
    }

    return 0;
}
