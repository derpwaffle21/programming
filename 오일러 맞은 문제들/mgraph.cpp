#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int * h;
    int m = 1;

    cin >> n;
    h = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];

        if (h[i] >= 10)
            m = 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << std::setw(m) << h[i] << ' ';

        for (int j = 0; j < h[i]; j++)
            cout << '*';

        cout << endl;
    }


    return 0;
}
