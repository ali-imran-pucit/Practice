#include <iostream>
using namespace std;

void main()
{
	int number = 0;

	cout << "please enter a number" << endl;
	cin >> number;
	if (number > 0) {
		int sum = 0;
		for (int divisor = 1; divisor <= number / 2; divisor++) {
			bool isdivisor = false;
			if (number % divisor == 0) {
				isdivisor = true;
				sum = sum + divisor;
			}
		}
		if (number==sum)
		{
			cout << number << " is a perfect number" << endl;
		}
		else
		{
			cout << number << " is not a perfect number" << endl;
		}
	}
	else
	{
		cout << "please enter a valid positive number" << endl;
	}
}
