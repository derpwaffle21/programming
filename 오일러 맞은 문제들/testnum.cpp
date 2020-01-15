#include <iostream>

using namespace std;

int main()
{
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        int t;

        cin >> t;
        total += (t * t);
    }

    cout << total % 10 << endl;

    return 0;
}
