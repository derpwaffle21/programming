#include <iostream>

using namespace std;

int main(void)
{
    int a, b;

    cin >> a >> b;

    int total = a + b;
    int i = 0;

    char str[10];

    while (total != 0)
    {
        int t = total % 10;

        switch (t)
        {
        case 0:
            str[i++] = 'T';
            break;

        case 1:
            str[i++] = 'I';
            break;

        case 2:
            str[i++] = 'N';
            break;

        case 3:
            str[i++] = 'U';
            break;

        case 4:
            str[i++] = 'K';
            break;

        case 5:
            str[i++] = 'E';
            break;

        case 6:
            str[i++] = 'D';
            break;

        case 7:
            str[i++] = 'S';
            break;

        case 8:
            str[i++] = 'O';
            break;

        case 9:
            str[i++] = 'G';
            break;
        }

        total /= 10;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << (char)str[j];

    cout << endl;

    return 0;
}
