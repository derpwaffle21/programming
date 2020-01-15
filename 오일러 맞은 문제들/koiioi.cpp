#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int koiNum = 0, ioiNum = 0;

    cin >> str;

    for (int i = 0; i < str.size() - 2; i++)
    {
        string subs = str.substr(i, 3);

        if (subs == "KOI")
            koiNum++;
        else if (subs == "IOI")
            ioiNum++;
    }

    cout << koiNum << endl;
    cout << ioiNum << endl;

    return 0;
}
