#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>

using namespace std;

string decimalToBinary(int n)
{
	string binary;
	bool started = false;

	for (int i = 32; i >= 0; i--)
	{
		if (n >= pow(2, i))
		{
			n -= pow(2, i);
			binary.append("1");
			started = true;
		}
		else
		{
			if (started)
				binary.append("0");
		}
	}

	return binary;
}

int main()
{
	int n;
	int hexN;
	stringstream stream;

	cin >> n;
	stream << n;
	stream >> hex >> hexN;

	string binary = decimalToBinary(n);
	string hexBinary = decimalToBinary(hexN);

	int b1 = 0, b2 = 0;

	for (int i = 0; i < binary.size(); i++)
		if (binary.at(i) == '1')
			b1++;

	for (int i = 0; i < hexBinary.size(); i++)
		if (hexBinary.at(i) == '1')
			b2++;

	cout << b1 << ' ' << b2 << endl;
}
