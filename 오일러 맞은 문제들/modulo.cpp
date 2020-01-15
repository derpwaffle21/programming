#include <iostream>

using namespace std;

int main()
{
    int n[10];
    bool counter[42];
    int result = 0;

    for (int i = 0; i < 42; i++)
        counter[i] = false;

    for (int i = 0; i < 10; i++)
        cin >> n[i];

    for (int i = 0; i < 10; i++)
        counter[n[i] % 42] = true;

    for (int i = 0; i < 42; i++)
        if (counter[i])
            result++;

    cout << result << endl;

    return 0;
}
