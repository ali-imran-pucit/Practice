#include <iostream>
#include <string>
using namespace std;

void main()
{
	int amount = 0;
	int price = 0;
	int candyoffer = 0;
	int candies = 0;
	int wrappers = 0;
	int remainder = 0;

	cout << "Please enter amount" << endl;
	cin >> amount;
	cout << "Please enter price of candy" << endl;
	cin >> price;
	cout << "Please enter number of wrappers required for one candy" << endl;
	cin >> candyoffer;

	if (price < amount)
	{
		candies = amount / price;
		wrappers = candies;
		while (wrappers >= candyoffer)
		{
			remainder = (wrappers % candyoffer);
			wrappers = wrappers / candyoffer;
			candies = candies + wrappers;
			wrappers = wrappers + remainder;
		}
		cout << "The maximum of " << candies << " candies can be bought from " << amount << " with " << wrappers << " wrappers to spare.";
	}
	else
	{
		cout << "You can't even buy a single candy, increase your amount or forget about candies" << endl;
	}
}
