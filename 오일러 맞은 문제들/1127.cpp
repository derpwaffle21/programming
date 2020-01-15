#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int num;

	cin >> num;

	int* wand = new int[num];
	int* box = new int[num];

	for (int i = 0; i < num; i++)
		cin >> wand[i];

	for (int i = 0; i < num; i++)
		cin >> box[i];

	sort(wand, wand + num);
	sort(box, box + num);

	for (int i = 0; i < num; i++)
	{
		if (wand[i] > box[i])
		{
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

	return 0;
}
