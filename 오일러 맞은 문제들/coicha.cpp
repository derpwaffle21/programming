#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int toPay = 1000 - n;
    int result = 0;

    while (toPay != 0)
    {
        if (toPay >= 500)
            toPay -= 500;
        else if (toPay >= 100)
            toPay -= 100;
        else if (toPay >= 50)
            toPay -= 50;
        else if (toPay >= 10)
            toPay -= 10;
        else if (toPay >= 5)
            toPay -= 5;
        else
            toPay--;

        result++;
    }

    cout << result << endl;

    return 0;
}
