#include "std_lib_facilities.h"

int main()
{
	cout << "Convering  yen, euros, and pounds into dollars" << endl;

	char unit = 0;
	int money = 0;

	//conversion in 1 dollar
	constexpr double yen = 0.0095;
	constexpr double euro = 1.16;
	constexpr double pound = 1.27;
	constexpr double kroner = 0.10;


	cout << "Please enter the amount of money: \n";
	cin >> money;

	cout << "Please enter what you want to convert into dollars \n"
		<< "y for yen / e for euro / p for pounds / k for kroner: \n";
	cin >> unit;

	switch(unit){
		case 'y':
			cout << money << " yen is " << money*yen << " dollars" << endl;
			break;
		case 'e':
			cout << money << " euro is " << money*euro << " dollars" << endl;
			break;
		case 'p':
			cout << money << " pound is " << money*pound << " dollars" << endl;
			break;
		case 'k':
			cout << money << " kroner is " << money*kroner << " dollars" << endl;
			break;
		default: 
			simple_error("Sorry, I don't know a unit called");
			break;
	}


	return 0;
}