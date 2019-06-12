#include <cstdio>

int n;
bool arr[20];
int cnt = 0;

void process(int depth)
{
    int win = 0;

    if (depth >= n)
        for (int i = 0; i < depth; i++)
            if (arr[i])
                win++;

    if (win >= n)
    {
        for (int i = 0; i < depth; i++)
        {
            if (arr[i])
                printf("o");
            else
                printf("x");
        }

        printf("\n");

        cnt++;

        return;
    }
    else if (depth - win >= n)
    {
        return;
    }
    else
    {
        arr[depth] = true;
        process(depth + 1);
        arr[depth] = false;
        process(depth + 1);
    }
}

int main()
{
    scanf("%d", &n);

    process(0);
    printf("%d\n", cnt);

    return 0;
}
