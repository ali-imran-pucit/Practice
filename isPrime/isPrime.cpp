//4# Prime Number

#include <iostream>
using namespace std;

void main()
{
	int number = 0;
	int a = 0;
	int status = 1;
	cout << "Please Enter a number" << endl;
	cin >> number;
	//a = number / 2;
	if (number == 2)
	{
		cout << "Number is prime";
	}
	else
	{

		for (int i = 2; i <= number / 2; i++)
		{
			if (number % i == 0)
			{
				cout << "Number is not Prime." << endl;
				status = 0;
				break;
			}
		}
		if (status)
		{
		/*	cout << "Number is not Prime";
		}
		else
		{*/
			cout << "Number is Prime";
		}
	}
}