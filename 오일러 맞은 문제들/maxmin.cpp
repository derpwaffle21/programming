#include <iostream>
using namespace std;

int main()
{
    int n;
    int maxVal = INT_MIN, minVal = INT_MAX;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;

        cin >> a;

        if (a > maxVal)
            maxVal = a;

        if (a < minVal)
            minVal = a;

    }

    cout << maxVal << endl;
    cout << minVal << endl;

    return 0;
}
