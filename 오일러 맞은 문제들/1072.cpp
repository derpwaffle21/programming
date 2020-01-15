#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int dist = 0;
	int lastTime = 0;

	for (int i = 0; i < n; i++)
	{
		int speed;
		int elapsedTime;

		cin >> speed >> elapsedTime;

		dist += (speed * (elapsedTime - lastTime));
		lastTime = elapsedTime;
	}

	cout << dist << endl;

	return 0;
}
