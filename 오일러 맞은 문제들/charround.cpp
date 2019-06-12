#include <iostream>

using namespace std;

void toRight(string& str)
{
    char t = str[str.size() - 1];

    for (int i = str.size() - 1; i > 0; i--)
        str[i] = str[i - 1];

    str[0] = t;
}

void toLeft(string& str)
{
    char t = str[0];

    for (int i = 1; i < str.size(); i++)
        str[i - 1] = str[i];

    str[str.size() - 1] = t;
}

int main()
{
    string s;
    string com;

    cin >> s;
    cin >> com;

    for (int i = 0; i < com.size(); i++)
    {
        if (com[i] == 'L')
            toLeft(s);
        else if (com[i] == 'R')
            toRight(s);
    }

    cout << s << endl;

    return 0;
}
