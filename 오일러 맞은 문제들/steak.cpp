#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    cout << ceil((double)(n * 2) / (k > n ? n : k)) << endl;

    return 0;
}
