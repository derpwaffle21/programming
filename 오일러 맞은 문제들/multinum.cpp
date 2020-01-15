#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int result;

    cin >> a >> b;
    result = a * b;

    while (b != 0)
    {
        cout << (b % 10) * a << endl;
        b /= 10;
    }

    cout << result << endl;

    return 0;
}
