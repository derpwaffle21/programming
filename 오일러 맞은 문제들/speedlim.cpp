#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int beforeTime = 0;
    int totalDis = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int speed, time;

        cin >> speed >> time;

        totalDis += speed * (time - beforeTime);
        beforeTime = time;
    }

    cout << totalDis << endl;

    return 0;
}
