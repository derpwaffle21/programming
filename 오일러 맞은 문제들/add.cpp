#include <iostream>

using namespace std;

int n;
int cnt = 0;

void process(int total)
{
    if (total >= n)
    {
        if (total == n)
            cnt++;

        return;
    }

    process(total + 1);
    process(total + 2);
    process(total + 3);
}

int main()
{
    cin >> n;

    process(0);

    cout << cnt << endl;

    return 0;
}
