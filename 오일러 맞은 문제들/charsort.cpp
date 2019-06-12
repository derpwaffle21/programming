#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

string StringToLower(string strToConvert)
{
    std::transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::tolower);

    return strToConvert;
}

int main()
{
    int n;

    cin >> n;
    vector<string> arr;

    for (int i = 0; i < n; i++)
    {
        string t;

        cin >> t;
        arr.push_back(StringToLower(t));
    }

    sort(arr.begin(), arr.end());

    for (vector<string>::iterator it = arr.begin(); it != arr.end(); it++)
        cout << *it << endl;

    return 0;
}
