#include <iostream>
#include <string>

using namespace std;

int main()
{
	string num;

	cin >> num;

	int* dp = new int[num.size() + 1];

	dp[0] = 1;
	dp[1] = 1;

	for (int i = 2; i <= num.size(); i++)
	{
		dp[i] = 0;

		if (num[i - 1] != '0')
			dp[i] = dp[i - 1];

		if ((num[i - 2] < '2' || (num[i - 2] == '2' && num[i - 1] <= '6')) && num[i - 2] != '0')
			dp[i] += dp[i - 2];
	}

	cout << dp[num.size()] << endl;

	return 0;
}
