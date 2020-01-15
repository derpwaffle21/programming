#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int k[3];

    cin >> k[0] >> k[1] >> k[2];

    for (int i = 0; i < 2; i++)
        for (int j = i + 1; j < 3; j++)
            if (k[i] > k[j])
                swap(k[i], k[j]);

    cout << max(k[2] - k[1], k[1] - k[0]) - 1 << endl;

    return 0;
}
