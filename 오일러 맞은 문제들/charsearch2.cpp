#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

string StringToLower(string strToConvert)
{
    std::transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::tolower);

    return strToConvert;
}

int main()
{
    int n;
    char toFind;
    bool found = false;

    cin >> n >> toFind;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;
        s = StringToLower(s);

        if (s[0] == tolower(toFind))
        {
            cout << s << endl;
            found = true;
        }
    }

    if (!found)
        cout << "NOT FOUND" << endl;

    return 0;
}
