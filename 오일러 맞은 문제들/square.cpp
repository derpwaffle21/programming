#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int cnt = 0;

    cin >> n;

    for (int b = 1; b < 500; b++)
        for (int a = b + 1; a <= 500; a++)
            if ((a * a) == (b * b) + n)
                cnt++;

    cout << cnt << endl;

    return 0;
}
