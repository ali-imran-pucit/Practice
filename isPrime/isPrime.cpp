#include <iostream>
using namespace std;

void main()
{
	int number = 0;
	bool isPrime = true;
	cout << "Please Enter a number" << endl;
	cin >> number;
	
	for (int i = 2; i <= number / 2; i++) {
		if (number % i == 0) {
			isPrime = false;
			break;
		}
	}

	if (isPrime) {
		cout << "Number is Prime";
	}
	else {
		cout << "Number is not Prime." << endl;
	}
}
