#include <iostream>

using namespace std;

int add_to_n(int n)
{
    if (n == 1)
        return n;
    else
        return n + add_to_n(n - 1);
}

int main()
{
    int n;

    cin >> n;

    cout << add_to_n(n) << endl;

    return 0;
}
