#include <iostream>

using namespace std;

int main()
{
    int a1, a2, a3, a4;
    int b1, b2, b3, b4;

    cin >> a1 >> a2 >> a3 >> a4;
    cin >> b1 >> b2 >> b3 >> b4;

    if ((a1 + a2 + a3 + a4) > (b1 + b2 + b3 + b4))
        cout << a1 + a2 + a3 + a4 << endl;
    else
        cout << b1 + b2 + b3 + b4 << endl;

    return 0;
}
