#include <iostream>

using namespace std;

int romeToNumber(string rome)
{
	int number = 0;

	for (int i = 0; i < rome.size(); i++)
	{
		switch (rome[i])
		{
		case 'M':
			number += 1000;
			break;

		case 'D':
			number += 500;
			break;

		case 'C':
			if (rome[i + 1] == 'D')
			{
				number += 400;
				i++;
			}
			if (rome[i + 1] == 'M')
			{
				number += 900;
				i++;
			}
			else
			{
				number += 100;
			}

			break;

		case 'L':
			number += 50;
			break;

		case 'X':
			if (rome[i + 1] == 'L')
			{
				number += 40;
				i++;
			}
			else if (rome[i + 1] == 'C')
			{
				number += 90;
				i++;
			}
			else
			{
				number += 10;
			}

			break;

		case 'V':
			number += 5;
			break;

		case 'I':
			if (rome[i + 1] == 'V')
			{
				number += 4;
				i++;
			}
			else if (rome[i + 1] == 'X')
			{
				number += 9;
				i++;
			}
			else
			{
				number += 1;
			}

			break;

		default:
			break;
		}
	}

	return number;
}

string numberToRome(int number)
{
	string rome;

	while (number != 0)
	{
		if (number >= 1000)
		{
			number -= 1000;
			rome += "M";
		}
		else if (number >= 900)
		{
			number -= 900;
			rome += "CM";
		}
		else if (number >= 500)
		{
			number -= 500;
			rome += "D";
		}
		else if (number >= 400)
		{
			number -= 400;
			rome += "CD";
		}
		else if (number >= 100)
		{
			number -= 100;
			rome += "C";
		}
		else if (number >= 90)
		{
			number -= 90;
			rome += "XC";
		}
		else if (number >= 50)
		{
			number -= 50;
			rome += "L";
		}
		else if (number >= 40)
		{
			number -= 40;
			rome += "XL";
		}
		else if (number >= 10)
		{
			number -= 10;
			rome += "X";
		}
		else if (number >= 9)
		{
			number -= 9;
			rome += "IX";
		}
		else if (number >= 5)
		{
			number -= 5;
			rome += "V";
		}
		else if (number >= 4)
		{
			number -= 4;
			rome += "IV";
		}
		else
		{
			number -= 1;
			rome += "I";
		}
	}

	return rome;
}

int main()
{
	string str1, str2;

	cin >> str1 >> str2;

	int res = romeToNumber(str1) + romeToNumber(str2);

	cout << res << endl;
	cout << numberToRome(res) << endl;

	return 0;
}
