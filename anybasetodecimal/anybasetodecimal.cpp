#include <iostream>
#include <string>
using namespace std;

void main()
{
	string number;
	int base = 0;
	int result = 0;
	string basename;

	cout << "Please enter a number" << endl;
	cin >> number;
	cout << "please enter a base" << endl;
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

		string con;
		bool valid = true;
		int length = number.length();
		int power = length;
		for (int i = 0; i < length; i++) {
			int digit = 0;
			int ascii = number[i];
			con = con + number[i];
			if (ascii >= 65 && ascii <= 70) {
				if (ascii == 65) {
					digit = 10;
				}
				else if (ascii == 66) {
					digit = 11;
				}
				else if (ascii == 67) {
					digit = 12;
				}
				else if (ascii == 68) {
					digit = 13;
				}
				else if (ascii == 69) {
					digit = 14;
				}
				else if (ascii == 70) {
					digit = 15;
				}
			}
			else {
				digit = stoi(con);
			}
			con = "";
			if ((base == 2 && ascii == 48 || ascii == 49) || (base == 8 && ascii >= 48 && ascii <= 57) || (base == 16 && ascii >= 48 && ascii <= 57 || ascii >= 65 && ascii <= 70)) {
				power = power - 1;
				int exponent = 1;
				for (int i = 0; i < power; i++) {
					exponent *= base;
				}
				result = result + (exponent * digit);
				valid = true;
			}
			else
			{
				valid = false;
				break;
			}
		}
		if (valid)
		{
			cout << "Decimal of " << basename << " " << number << " is: " << result;
		}
		else
		{
			cout << "Enter a valid input of " << basename;
		}
	}
	else
	{
		cout << "Please Enter base from Binary '2', Octal '8' and Hexa '16' only";
	}
}
