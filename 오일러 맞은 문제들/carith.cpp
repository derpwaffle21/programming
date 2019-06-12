#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    for (int i = 0; i < 2; i++)
    {
        char c;
        int t;

        cin >> c;
        cin >> t;

        switch (c)
        {
        case '+':
            num += t;
            break;

        case '-':
            num -= t;
            break;

        case '*':
            num *= t;
            break;

        case '/':
            num /= t;
            break;
        }
    }

    cout << num << endl;

    return 0;
}
