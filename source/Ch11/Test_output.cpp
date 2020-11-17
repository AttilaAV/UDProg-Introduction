#include "std_lib_facilities.h"


int main()
{
	int birth_year = 2001;

    cout << "decimal\t\t" << birth_year << '\n' << hex
         << "hexadecimal\t" << birth_year << '\n' << oct
         << "octal\t\t" << birth_year << '\n';

    int a,b,c,d;
    cin >> a >>oct >> b >> hex >> c >> d;
	cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;

	double z = 1234567.89;
	cout << '\n';
	cout << "defaultfloat:\n" << defaultfloat;
	cout << z << endl;

	cout << "scientific:\n" << scientific;
	cout << z << endl;

	cout << "fixed:\n" << fixed;
	cout << z << endl;


        cout << '|' << setw(8) << "Friend1" << '|' << setw(8) << "Friend2" 
         << '|' << setw(24) << "Friend1@gmail.com"
         << '|' << setw(16) << "(204) 555-1234" << "|\n"
         << '|' << setw(8) << "F1" << '|' << setw(8) << "F2"
         << '|' << setw(24) << "Friend2@gmail.com"
         << '|' << setw(16) << "(204) 555-4321" << "|\n";

	return 0;
}