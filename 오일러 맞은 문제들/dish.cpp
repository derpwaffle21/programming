#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cin >> str;

    int result = str.size() * 10;

    for (int i = 1; i < str.size(); i++)
        if (str[i] == str[i - 1])
            result -= 5;

    cout << result << endl;

    return 0;
}
