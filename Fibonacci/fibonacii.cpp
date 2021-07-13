#include <iostream>
#include <string>
using namespace std;

void main()
{
	int number = 0;
	cout << "Please enter number" << endl;
	cin >> number;

	if (number>0)
	{
		int firstNumber = 1;
		int secondNumber = 1;
		cout << firstNumber << endl;
		for (int i = 2; i <= number; i++) {
			cout << secondNumber << endl;
			int temp = secondNumber;
			secondNumber = firstNumber + secondNumber;
			firstNumber = temp;
		}
	}
	else
	{
		cout << "Enter a non zero positive number." << endl;
	}
}
