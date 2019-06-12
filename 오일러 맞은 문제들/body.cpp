#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int weight[n];
    int height[n];
    int place[n];

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
        cin >> height[i];
    }

    for (int i = 0; i < n; i++)
        place[i] = 1;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (height[i] < height[j] && weight[i] < weight[j])
                place[i]++;

    for (int i = 0; i < n; i++)
        cout << place[i] << ' ';

    cout << endl;

    return 0;
}
