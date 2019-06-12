#include <iostream>

using namespace std;

int main()
{
    int arr[15];
    int cnt = 0, i;

    for (i = 0; i < 15; i++)
    {
        int t;

        cin >> t;

        if (t == 0)
            break;
        else
            arr[i] = t;
    }

    int e = i;

    for (i = 0; i < e; i++)
    {
        bool isTrue = false;

        for (int j = 0; j < 15; j++)
        {
            if (arr[j] * 2 == arr[i])
            {
                isTrue = true;
                break;
            }
        }

        if (isTrue)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}
