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
    string toFind;
    bool isAns = false;

    cin >> n >> toFind;
    toFind = StringToLower(toFind);

    for (int i = 0; i < n; i++)
    {
        string s;
        bool found = true;

        cin >> s;
        s = StringToLower(s);

        for (int i = 0; i < toFind.size(); i++)
        {
            if (s[i] != toFind[i])
            {
                found = false;
                break;
            }
        }

        if (found)
        {
            cout << s << endl;
            isAns = true;
        }
    }

    if (!isAns)
        cout << "NOT FOUND" << endl;

    return 0;
}
