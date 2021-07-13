#include <iostream>
#include <string>
using namespace std;

void main()
{
	int number = 0;
	int base = 0;
	string result;
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

		if (number == 0) {
			cout << basename << " of given input is: 0";
		}
		else {
			while (number > 0)
			{
				result = (char)((number % base) < 10 ? ((number % base) + 48) : ((number % base) + 55)) + result;
				number /= base;
			}
			cout << basename << " of given input is : " << result;
		}
	}
	else
	{
		cout << "please enter base from binary '2', octal '8' and hexa '16' only";
	}
}
