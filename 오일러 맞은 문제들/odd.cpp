#include <iostream>

using namespace std;

int main()
{
    int oddSum = 0;
    int oddMin = INT_MAX;

    for (int i = 0; i < 7; i++)
    {
        int num;

        cin >> num;

        if (num % 2 == 1)
        {
            oddSum += num;

            if (num < oddMin)
                oddMin = num;
        }
    }

    if (oddMin != INT_MAX)
    {
        cout << oddSum << endl;
        cout << oddMin << endl;
    }
    else
        cout << -1 << endl;

    return 0;
}
