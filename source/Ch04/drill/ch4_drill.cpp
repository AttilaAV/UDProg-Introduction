#include "std_lib_facilities.h"

double convert(double a, string unit){
	if(unit == "m") a = a;
	else if(unit == "cm") a = a / 100;
	else if(unit == "in") a = a * 2.54 / 100;
	else if(unit == "ft") a = a * 2.54 * 12/100;
	else simple_error("ERROR ILLEGAL UNIT!");
	return a;
}

int main()
{
	vector<double> values;
	double sum{0};
	double a{0};
	double min{numeric_limits<double>::max()};
	double max{numeric_limits<double>::lowest()};
	string unit{""};

	cout << "Please enter a value " << endl
		<< "Accepted units are in, ft, cm, m." << endl;

	while(cin >> a >> unit){
		double converted{convert(a,unit)};
		cout << "\nyou entered " << a << " " << unit << endl
			<< "The converted value is " << converted << " m" << endl << endl;

		if(converted > max)
        {
        	cout << "The largest so far\n";
        	max = converted;
        }
        if(converted < min)
        {
        	cout << "The smallest so far\n";
        	min = converted;
        }

        values.push_back(converted);
		sort(values);
	}

	for(double value : values) sum += value;

	cout << "\n------------\n";
	cout << "Sum: " << sum << " m" << endl;
	cout << "Smallest: " << values[0] << " m" << endl;
	cout << "Largest: " << values[values.size() - 1] << " m" << endl;
	cout << "Number of given values: " << values.size() << endl;
	
	for(double value : values) 
		cout << value << "\n";

	return 0;
}
