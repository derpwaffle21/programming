#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;

        cin >> str;

        if (int(str[str.size() - 1] - 48) % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }

    return 0;
}
