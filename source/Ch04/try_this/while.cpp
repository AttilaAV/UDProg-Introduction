#include "std_lib_facilities.h"

int main()
{

	char letter = 'a';

	while (letter <= 'z')
	{
		cout << char(letter) << "\t" << int(letter) << endl;
		++letter;
	}


	return 0;
}