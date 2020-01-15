#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	int w_m = 100, h_m = 100;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i * j >= n)
			{
			    if (i + j < w_m + h_m)
                {
                    w_m = i;
                    h_m = j;
                }
			}
		}
	}

	cout << w_m << ' ' << h_m << endl;
}
