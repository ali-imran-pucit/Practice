#include <iostream>
#include <string>
using namespace std;

void main()
{
	int number = 0;
	int base = 0;
	string result;
	string basename;

	cout << "Please enter a number" << endl;
	cin >> number;
	cout << "Please enter a base" << endl;
	cin >> base;



	if (base == 2 || base == 8 || base == 16) {
		if (base == 2) {
			basename = "Binary";
		}
		else if (base == 8) {
			basename = "Octal";
		}
		else if (base == 16) {
			basename = "HexaDecimal";
		}

		while (number > 1)
		{
			if (base == 16) {
				string remainder;
				remainder = to_string(number % base);
				if (remainder == "10") {
					remainder = "A";
				}
				else if (remainder == "11") {
					remainder = "B";
				}
				else if (remainder == "12") {
					remainder = "C";
				}
				else if (remainder == "13") {
					remainder = "D";
				}
				else if (remainder == "14") {
					remainder = "E";
				}
				else if (remainder == "15") {
					remainder = "F";
				}
				result = remainder + result;
				number /= base;
				if (number == 1)
				{
					result = to_string(number) + result;
				}
			}
			else
			{

				result = to_string(number % base) + result;
				number /= base;
				if (number == 1)
				{
					result = to_string(number) + result;
				}
			}			
		}
		cout << basename << " of given Input is: " << result;
	}
	else
	{
		cout << "Please Enter base from Binary '2', Octal '8' and Hexa '16' only";
	}
}
