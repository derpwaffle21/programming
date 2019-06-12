#include <iostream>
#include <cmath>

using namespace std;

bool * cnt;
int m = INT_MAX;
int n;

void process(int * sourArr, int * bitterArr, int sour, int bitter, int depth, int prev)
{
    if (depth != 0)
        if (abs(sour - bitter) < m)
            m = abs(sour - bitter);

    for (int i = prev + 1; i < n; i++)
        if (cnt[i])
            process(sourArr, bitterArr, sour * sourArr[i], bitter + bitterArr[i], depth + 1, i);
}

int main()
{
    int * sour, * bitter;

    cin >> n;
    cnt = (bool *)malloc(sizeof(bool) * n);

    for (int i = 0; i < n; i++)
        cnt[i] = true;

    sour = (int *)malloc(sizeof(int) * n);
    bitter = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        cin >> sour[i];
        cin >> bitter[i];
    }

    process(sour, bitter, 1, 0, 0, -1);
    cout << m << endl;

    return 0;
}
