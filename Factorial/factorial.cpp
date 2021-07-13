#include <iostream>
#include <string>
using namespace std;

void main()
{
	int number = 0;
	int fact = 1;
	cout << "Enter Number" << endl;
	cin >> number;
	for (int i = 2; i <= number; i++) {
		fact *= i;
	}
	cout << fact;
}
