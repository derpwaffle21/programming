#include <iostream>

using namespace std;

int main()
{
    int n;
    int even = 0, odd = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;

        cin >> a;

        if (a % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << even << endl;
    cout << odd << endl;

    return 0;
}
