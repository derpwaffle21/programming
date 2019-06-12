#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string s;

    cin >> s;

    for (int i = 0; i < signed(s.size()); i++)
        cout << s[i] << "->" << int(s[i]) << endl;

    return 0;
}
