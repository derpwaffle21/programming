#include <iostream>

using namespace std;

int main()
{
    int n;
    int oddTotal = 0, evenTotal = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            evenTotal += i;
        else
            oddTotal += i;
    }

    cout << evenTotal << endl;
    cout << oddTotal << endl;

    return 0;
}
