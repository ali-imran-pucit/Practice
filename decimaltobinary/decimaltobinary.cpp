#include <iostream>
#include <string>
using namespace std;

void main()
{
	int number = 0;
	string binary;

	cout << "please enter a number" << endl;
	cin >> number;

	if (number > 1)
	{
		while (number > 1)
		{
			binary = to_string(number % 2) + binary;
			number /= 2;
			if (number == 1)
			{
				binary = to_string(number) + binary;
			}
		}

		cout << "binary of given input is: " << binary;
	}
	else
	{
		cout << "Enter a Valid Number";
	}

}
