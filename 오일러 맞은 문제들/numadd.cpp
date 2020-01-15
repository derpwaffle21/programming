#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string s;

    int result = 0;

    cin >> s;

    for (int i = 0; i < (signed int)s.size(); i++)
    {
        int val = int(s[i]) - 48;

        result += (i == 0 ? val : (val * pow(10, double(i))));
        result += (val * pow(10, double(s.size() -  i - 1)));
    }

    cout << result << endl;

    return 0;
}
