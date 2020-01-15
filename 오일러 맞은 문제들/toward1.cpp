#include <iostream>

using namespace std;

int m = INT_MAX;

void process(int depth, int curr)
{
    if (depth >= m || curr < 1)
        return;

    if (curr == 1)
        m = depth;

    if (curr % 2 == 0)
        process(depth + 1, curr / 2);

    if (curr % 3 == 0)
        process(depth + 1, curr / 3);

    process(depth + 1, curr - 1);
}

int main()
{
    int n;

    cin >> n;

    process(0, n);

    cout << m << endl;

    return 0;
}
