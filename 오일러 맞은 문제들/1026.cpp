#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <stack>
#include <ctime>
#include <numeric>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int piecesNeeded[6] = { 1, 1, 2, 2, 2, 8 };
	int pieces[6];

	for (int i = 0; i < 6; i++)
		cin >> pieces[i];

	for (int i = 0; i < 6; i++)
		cout << piecesNeeded[i] - pieces[i] << ' ';

	cout << endl;

	return 0;
}
