#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    swap(a[0], a[2]);
    swap(b[0], b[2]);

    for (int i = 0; i < 3; i++)
    {
        if (a[i] != b[i])
        {
            cout << (a[i] > b[i] ? a : b) << endl;
            break;
        }
    }

    return 0;
}
