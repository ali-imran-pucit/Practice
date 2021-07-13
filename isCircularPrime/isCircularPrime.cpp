#include <iostream>
#include <string>
using namespace std;

void main()
{
	int number = 0;
	bool iscircularprime = true;
	cout << "please enter a number" << endl;
	cin >> number;

	int number1 = number;
	int noOfDigits = 0;
	while (number1 > 0) {
		noOfDigits++;
		number1 /= 10;
	}

	int exponent = 1;

	for (int i = 1; i < noOfDigits; i++) {
		exponent *= 10;
	}

	number1 = number;
	do {
		bool isprime = true;
		for (int i = 2; i <= number1 / 2; i++) {
			if (number1 % i == 0) {
				isprime = false;
				break;
			}
		}

		if (isprime) {
			number1 = ((number1 % 10) * exponent) + (number1 / 10);
		}
		else {
			iscircularprime = false;
			break;
		}
	} while (number1 != number);

	if (iscircularprime) {
		cout << "number is circular prime." << endl;
	}
	else {
		cout << "number is not circular prime." << endl;
	}
}
