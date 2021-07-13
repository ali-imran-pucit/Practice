#include <iostream>
 #include <string>
using namespace std;

void main()
{
	int number = 0;
	string binary;

	cout << "please enter a number" << endl;
	cin >> number;

	if (number == 0) {
		cout << "binary of given input is: 0";
	}
	else {
		while (number > 0)
		{
			binary = (char)((number % 2) + 48) + binary;
			number /= 2;
		}
		cout << "binary of given input is: " << binary;
	}
}
