#include <iostream>

using namespace std;

int main(void)
{
	for (int i = 0; i < 3; i++)
    {
        string s;
        char old_c;
        int max_combo = 1;
        int combo = 1;

        cin >> s;
        old_c = s.at(0);

        for (int i = 1; i < s.size(); i++)
        {
            char c = s.at(i);

            if (c == old_c)
            {
                combo++;

                if (combo > max_combo)
                    max_combo = combo;
            }
            else
            {
                combo = 1;
                old_c = c;
            }
        }

        cout << max_combo << endl;
    }
}
