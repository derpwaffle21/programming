#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cstdio>

using namespace std;

int main()
{
    int n, k;
    vector<float> v;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        float f;

        cin >> f;
        v.push_back(f);
    }

    cin >> k;

    sort(v.begin(), v.end());
    printf("%.2f\n", v.at(n - k));

    return 0;
}
