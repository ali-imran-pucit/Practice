#include <iostream>
#include <string>
using namespace std;

void main()
{
	int number = 0;
	string hexa;

	cout << "Please enter a number" << endl;
	cin >> number;

	while (number > 1)
	{
		string remainder;
		remainder = to_string(number % 16);
		if (remainder == "10") {
			remainder = "A";
		}
		else if (remainder == "11") {
			remainder = "B";
		}
		else if (remainder == "12") {
			remainder = "C";
		}
		else if (remainder == "13"){
			remainder = "D";
		}
		else if (remainder == "14"){
			remainder = "E";
		}
		else if (remainder == "15"){
			remainder = "F";
		}
		hexa = remainder + hexa;
		number /= 16;
		if (number == 1)
		{
			hexa = to_string(number) + hexa;
		}
	}
	cout << "Hexa of given Input is: " << hexa;
}

