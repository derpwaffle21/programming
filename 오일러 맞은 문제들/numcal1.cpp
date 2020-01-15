#include <iostream>

using namespace std;

int main()
{
    int n;
    int total = 0;

    cin >> n;

    for (int i = 1; i <= 100; i++)
        total += (n * i);

    cout << total << endl;

    return 0;
}
