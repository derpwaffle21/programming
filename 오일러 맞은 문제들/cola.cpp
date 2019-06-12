#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int bottles = 0, k;
    int result = 0;

    cin >> n >> k;

    do
    {
        result += n;
        bottles += n;
        n = (int)floor(double(bottles) / k);
        bottles -= (n * k);
    } while (n != 0);

    cout << result << endl;

    return 0;
}
