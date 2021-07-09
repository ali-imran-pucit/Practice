#include <iostream>
using namespace std;

void main()
{
	int from = 0;
	int to = 0;

	cout << "please enter range from" << endl;
	cin >> from;

	cout << "please enter range to" << endl;
	cin >> to;

	if (from < to && from>2) {
		for (int number = from; number <= to; number++) {
			bool isPrime = true;
			for (int i = 2; i <= number / 2; i++) {
				if (number % i == 0) {
					isPrime = false;
					break;
				}
			}

			if (isPrime) {
				cout << number << endl;
			}
		}
	}
	else {
		cout << "Please enter valid range";
	}
}
