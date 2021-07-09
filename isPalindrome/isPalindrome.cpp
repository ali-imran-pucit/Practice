#include <iostream>
using namespace std;

void main()
{
	int number = 0;
	int reversenumber = 0;


	cout << "Please enter number" << endl;
	cin >> number;

	if (number < 0)
	{
		cout << "Please enter a valid number";
	}
	else
	{
		int number1 = number;
		while (number1 > 0)
		{
			reversenumber = (reversenumber * 10) + (number1 % 10);
			number1 /= 10;
		}

		if (number == reversenumber)
		{
			cout << "Given number "<< number<<" is Palindrome";
		}
		else
		{
			cout << "Given number " << number << " is not Palindrome";
		}
	}
}
