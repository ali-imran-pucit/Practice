#include <iostream>
#include <string>
using namespace std;

void main()
{
	int number = 0;
	string binary;

	cout << "Please enter a number" << endl;
	cin >> number;

	if (number > 7)
	{
		while (number > 1)
		{
			binary = to_string(number % 8) + binary;
			number /= 8;
			if (number == 1)
			{
				binary = to_string(number) + binary;
			}
		}

		cout << "Octal of given Input is: " << binary;
	}
	else
	{
		cout << "Please Enter a valid number";
	}
}

