#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    stack<int> s;

    int input = -1;

    while (input != 0)
    {
        cin >> input;

        if (input == 1)
        {
            int in;

            cin >> in;

            if (signed(s.size()) != n)
                s.push(in);
        }
        else if (input == 2)
        {
            if (!s.empty())
            {
                s.pop();
            }
        }
    }

    cout << s.size() << endl;

    while (!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }

	return 0;
}
