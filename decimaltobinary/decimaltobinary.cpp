#include <iostream>
 #include <string>
using namespace std;

void main()
{
	int number = 0;
	string octal;

	cout << "please enter a number" << endl;
	cin >> number;

	if (number == 0) {
		cout << "Octal of given input is: 0";
	}
	else {
		while (number > 0)
		{
			octal = (char)((number % 8) + 48) + octal;
			number /= 8;
		}
		cout << "Octal of given input is: " << octal;
	}
}

