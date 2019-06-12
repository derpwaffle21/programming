#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int h[7];

    for (int i = 0; i < 7; i++)
        cin >> h[i];

    for (int i = 0; i < 6; i++)
        for (int j = i + 1; j < 7; j++)
            if (h[i] < h[j])
                swap(h[i], h[j]);

    cout << h[0] << endl;
    cout << h[1] << endl;

    return 0;
}
