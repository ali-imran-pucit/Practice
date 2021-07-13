#include <iostream>
#include <string>
using namespace std;

void main()
{
	int number = 0;
	string hexa;

	cout << "Please enter a number" << endl;
	cin >> number;

	if (number == 0) {
			cout << "Hexa of given input is: 0";
	}
	else {
		while (number > 0)
		{
			hexa = (char)((number % 16) < 10 ? ((number % 16) + 48) : ((number % 16) + 55)) + hexa;
			number /= 16;
		}
		cout << "Hexa of given input is: " << hexa;
	}
}
