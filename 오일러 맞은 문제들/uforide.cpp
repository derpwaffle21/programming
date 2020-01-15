#include <iostream>
#include <string>

using namespace std;

int calculate(string str)
{
    int result = 1;

    for (int i = 0; i < str.size(); i++)
        result *= (str[i] - 64);

    return result;
}

int main()
{
    string ufoName, name;

    cin >> ufoName;
    cin >> name;

    if ((calculate(ufoName) % 47) == (calculate(name) % 47))
        cout << "GO" << endl;
    else
        cout << "STAY" << endl;

    return 0;
}
