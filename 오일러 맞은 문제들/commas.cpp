#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    int a;

    cin >> n;
    a = n.size() % 3;

    for (int i = 1; i <= n.size(); i++)
    {
        cout << n[i - 1];

        if (i % 3 == a && i != n.size())
            cout << ',';
    }

    cout << endl;

    return 0;
}
