#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int n, total = 0;
    int * blocks;

    cin >> n;

    blocks = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        cin >> blocks[i];
        total += blocks[i];
    }

    int t = total / n;
    int result = 0;

    for (int i = 0; i < n; i++)
        result += abs(blocks[i] - t);

    cout << result / 2 << endl;

    return 0;
}
