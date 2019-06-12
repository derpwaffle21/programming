#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num[10];

    for (int i = 0; i < 10; i++)
        cin >> num[i];

    for (int i = 0; i < 9; i++)
        for (int j = i + 1; j < 10; j++)
            if (num[i] < num[j])
                swap(num[i], num[j]);

    cout << num[2] << endl;

    return 0;
}
