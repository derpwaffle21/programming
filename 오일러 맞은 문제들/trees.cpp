#include <iostream>

using namespace std;

int main(void)
{
    int l, m;

    cin >> l >> m;
    int trees = l + 1;

    for (int i = 0; i < m; i++)
    {
        int s, e;

        cin >> s >> e;

        trees -= (e - s + 1);
    }

    cout << trees << endl;

    return 0;
}
