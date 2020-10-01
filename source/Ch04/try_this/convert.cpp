#include "std_lib_facilities.h"

int main()
{
	cout << "Convering  yen, euros, and pounds into dollars" << endl;

	char unit = 0;
	int money = 0;
	constexpr double yen = 0.0095;
	constexpr double euro = 1.16;
	constexpr double pound = 1.27;

	cout << "Please enter the amount of money: \n";
	cin >> money;

	cout << "Please enter what you want to convert into dollars \n"
		<< "y for yen / e for euro / p for pounds : \n";
	cin >> unit;

	if(unit == 'y')
		cout << money << " is " << money*yen << " dollars" << endl;
	else if(unit == 'e')
		cout << money << " is " << money*euro << " dollars" << endl;
	else if(unit == 'p')
		cout << money << " is " << money*pound << " dollars" << endl;
	else
		simple_error("Sorry, I don't know a unit called");


	return 0;
}