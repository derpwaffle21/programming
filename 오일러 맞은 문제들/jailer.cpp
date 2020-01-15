#include <iostream>

using namespace std;

int main()
{
    int n;
    bool * locked;
    int result = 0;

    cin >> n;
    locked = (bool *)malloc(sizeof(bool) * n);

    for (int i = 0; i < n; i++)
        locked[i] = true;

    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j += (i + 1))
            locked[j] = !locked[j];

    for (int i = 0; i < n; i++)
        if (!locked[i])
            result++;

    cout << result << endl;

    return 0;
}
