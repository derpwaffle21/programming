#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    return a;
}

int main()
{
    long long result = 0;
    int n;
    int * num;

    cin >> n;
    num = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        cin >> num[i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            result += gcd(num[i], num[j]);

    cout << result << endl;

    return 0;
}
