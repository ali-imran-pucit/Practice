#include <iostream>
#include <string>
using namespace std;

void main()
{
	string input;

	cout << "Please enter a string input" << endl;
	cin >> input;

	bool valid = true;
	int result = 0;

	int length = input.length();
	for (int i = 0; i < length; i++){
		if ((int)input[i] >= 48 && (int)input[i] <= 57){
			result = (result * 10) + ((int)input[i] - 48);
		}
		else{
			valid = false;
			break;
		}
	}

	if (valid){
		cout << "The Result is : " << result;
	}
	else{
		cout << "Please enter a valid input";
	}
}
