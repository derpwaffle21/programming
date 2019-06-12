#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

string StringToUpper(string strToConvert)
{
    std::transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::toupper);

    return strToConvert;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        string s;
        char c;

        cin >> s >> c;
        s = StringToUpper(s);

        cout << s.find(toupper(c)) + 1 << endl;
    }

    return 0;
}
