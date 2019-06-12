#include <iostream>

using namespace std;

int main()
{
    int n;
    int evenSum = 0, oddSum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;

        cin >> a;

        if (a % 2 == 0)
            evenSum += a;
        else
            oddSum += a;
    }

    cout << evenSum << " " << oddSum << endl;

    return 0;
}
