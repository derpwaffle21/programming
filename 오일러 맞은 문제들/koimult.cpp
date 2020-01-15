#include <iostream>

using namespace std;

int main(void)
{
    string a, b;
    int total = 0;

    cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
        for (int j = 0; j < b.size(); j++)
            total += (int(a[i]) - 48) * (int(b[j]) - 48);

    cout << total << endl;

    return 0;
}
