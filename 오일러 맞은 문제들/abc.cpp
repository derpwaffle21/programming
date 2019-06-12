#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n[3];
    int a, b, c;
    string str;

    cin >> n[0] >> n[1] >> n[2];
    cin >> str;

    for (int i = 0; i < 2; i++)
        for (int j = i + 1; j < 3; j++)
            if (n[i] > n[j])
                swap(n[i], n[j]);

    for (int i = 0; i < str.size(); i++)
    {
        char c = str[i];

        if (c == 'A')
            cout << n[0] << ' ';
        else if (c == 'B')
            cout << n[1] << ' ';
        else if (c == 'C')
            cout << n[2] << ' ';
    }

    cout << endl;

    return 0;
}
