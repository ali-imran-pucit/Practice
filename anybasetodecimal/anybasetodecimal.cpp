#include <iostream>
#include <string>
using namespace std;

void main()
{
	string number;
	int base = 0;
	int result = 0;
	string basename;

	cout << "please enter a number" << endl;
	cin >> number;
	cout << "please enter a base" << endl;
	cin >> base;

	if (base == 2 || base == 8 || base == 16) {
		if (base == 2) {
			basename = "binary";
		}
		else if (base == 8) {
			basename = "octal";
		}
		else if (base == 16) {
			basename = "hexadecimal";
		}

		bool valid = true;
		int power = number.length() - 1;
		for (int i = 0; i < number.length(); i++) {
			if (((int)number[i] >= 48 && (int)number[i] <= 57) || ((int)number[i] >= 65 && (int)number[i] <= 70)) {
				int digit = ((int)number[i] >= 48 && (int)number[i] <= 57) ? ((int)number[i] - 48) : ((int)number[i] - 55);
				if (!(digit < base)) {
					valid = false;
					break;
				}
				int exponent = 1;
				for (int i = 0; i < power; i++) {
					exponent *= base;
				}

				result += (digit * exponent);
				power--;
			}
			else
			{
				valid = false;
				break;
			}
		}
		if (valid)
		{
			cout << "decimal of " << basename << " " << number << " is: " << result;
		}
		else
		{
			cout << "enter a valid input of " << basename;
		}
	}
	else
	{
		cout << "please enter base from binary '2', octal '8' and hexa '16' only";
	}
}
