#include "std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; ++i) 
    	os << a[i] << '\n';
    return os;
}

ostream& print_vector(ostream& os, vector<int>& n)
{
	for (int nn : n)
		os << nn << endl;
	return os;
}

int main()
{

	//1. Allocate an array of ten ints on the free store using new.
	int* a = new int[10] {0,0,0,0,0,0,0,0,0,0};

	//2. Print the values of the ten ints to cout.
	for (int i = 0; i < 10; i++) 
		cout << a[i] << endl;

	print_array(cout, a, 10);
	delete[] a;

	int* b = new int[11] {100,101,102,103,104,105,106,107,108,109,110};
	print_array(cout, b, 11);
	delete [] b;


	vector<int> c(20);
	for(int i = 0; i < 20; ++i)
		c.push_back(i);

	print_vector(cout, c);


	return 0;
}