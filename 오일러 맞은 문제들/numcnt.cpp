#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int result;

    cin >> a >> b >> c;
    result = a * b * c;

    int counter[10];

    for (int i = 0; i < 10; i++)
        counter[i] = 0;

    while (result != 0)
    {
        counter[result % 10]++;
        result /= 10;
    }

    for (int i = 0; i < 10; i++)
        cout << counter[i] << endl;

    return 0;
}
