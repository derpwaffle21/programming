#include <iostream>
#include <cmath>

using namespace std;

char * result;
int s = 0;

void convert(int n, int t)
{
    int tmp = n % t;
    n /= t;

    if (tmp > 9)
        result[s++] = tmp + 55;
    else
        result[s++] = tmp + 48;

    if (n != 0)
        convert(n, t);
    else
        return;
}

int main()
{
    int n, t;


    cin >> n >> t;

    result = (char *)malloc(sizeof(char) * int(sqrt(n)));

    convert(n, t);

    for (int i = s - 1; i >= 0; i--)
        cout << result[i];

    cout << endl;

    return 0;
}
