#include <iostream>
#include <string>
using namespace std;

void main()
{
	string input;

	cout << "Please enter a string input" << endl;
	cin >> input;

	bool valid = true;
	string con;

	int length = input.length();
	for (int i = 0; i < length; i++){
		int a = 0;
		a = input[i];
		if (a >= 48 && a <= 57){
			con = con + input[i];
			valid = true;
		}
		else{
			valid = false;
			break;
		}
	}
	if (valid){
		int result = stoi(con);
		cout <<result ;
	}
	else{
		cout << "Please enter a valid input";
	}
}
