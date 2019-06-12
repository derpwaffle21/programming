#include <iostream>

using namespace std;

int res = 0;
int n;

void recurr(int depth, int total, int last, int* path)
{
	if (total == n)
	{
		cout << ++res << " : ";
		
		for (int i = 0; i < depth - 1; i++)
		{
			cout << path[i] << '+';
		}
		
		cout << path[depth - 1] << endl;
		
		return;
	}
	else if (total > n)
	{
		return;
	}
	
	for (int i = 1; i <= last; i++)
	{
		path[depth] = i;
		recurr(depth + 1, total + i, i, path);
	}
}

int main(int argc, char** argv)
{
	cin >> n;
	
	recurr(0, 0, n, new int[n]);
	
	cout << "partitions = " << res << endl;
	
	return 0;
}
