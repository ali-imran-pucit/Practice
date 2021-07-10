#include <iostream>
#include <string>
using namespace std;

void main()
{
	int number = 0;
	int CircularRotation = 0;
	bool isprime = true;
	bool iscircularprime = true;
	cout << "please enter a number" << endl;
	cin >> number;

	int number1 = number;

	for (int i = 2; i <= number1 / 2; i++) {
		if (number1 % i == 0) {
			isprime = false;
			break;
		}
		if (isprime) {
				number1 = stoi(to_string(number1 % 10) + to_string(number1 / 10));
		}
	}
	if (isprime) {
		cout << "number is circular prime." << endl;
	}
	else {
		cout << "number is not circular prime." << endl;
	}
}
