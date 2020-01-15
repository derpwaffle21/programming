#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    int oddNum = 0, evenNum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        if (s.size() % 2 == 0)
            evenNum++;
        else
            oddNum++;
    }

    cout << evenNum << endl;
    cout << oddNum << endl;

    return 0;
}
