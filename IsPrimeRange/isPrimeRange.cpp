//5# Prime number in range

#include <iostream>
using namespace std;

void main()
{
	int status = 1;
	int from = 0;
	int to = 0;

	cout << "please enter range from" << endl;
	cin >> from;

	cout << "please enter range to" << endl;
	cin >> to;

	if (from < to && from>2)
	{

		int i = 0, j = 0;
		for (i = from; i <= to; i++)
		{
			status = 1;
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					status = 0;
					break;
				}
			}
			if (status)
			{
				cout << i << " is prime." << endl;
			}
			else
			{
				cout << i << " is not prime." << endl;
			}
		}
	}
	else
	{
		cout << "Please enter valid range";
	}

}