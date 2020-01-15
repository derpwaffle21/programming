#include <iostream>

using namespace std;

int main()
{
    int n;
    int * m;

    cin >> n;
    m = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        cin >> m[i];

    for (int i = 0; i < n; i++)
    {
        int place = 1;

        for (int j = 0; j < n; j++)
            if (m[i] < m[j])
                place++;

        cout << place << ' ';
    }

    cout << endl;

    return 0;
}
