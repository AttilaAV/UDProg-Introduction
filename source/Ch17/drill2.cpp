#include "std_lib_facilities.h"

int main()
{
	int a = 7;
	int* p1 = &a;

	cout << "pointer " << p1 << " points to " << *p1 << endl;

	int* p2 = new int[7];

	int x = 1;
	for(int i = 0; i < 7; ++i)
	{
		p2[i] = x;
		x *= 2;
	}

	cout << "pointer " << p2 << " points to " << *p2 << endl;

	int* p3 = p2;
	p2 = p1;
	p2 = p3;

	cout << "pointer " << p1 << " points to " << *p1 << endl;
	cout << "pointer " << p2 << " points to " << *p2 << endl;

	delete[] p2;

	p1 = new int[10];

	x = 1;
	for (int i = 0; i < 10; ++i)
	{
		p1[i] = x;
		x *= 2;
	}

	p2 = new int[10];

	for(int i = 0; i < 10; ++i)
	{
		p2[i] = p1[i];
	}

	for (int k = 0; k < 10; ++k)
		cout << p2[k] << '\t';
	cout << '\n';

    //with vectors
	vector<int> v1 {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	vector<int> v2 (10);
	v2 = v1;

	for (int v : v2) cout << v << '\t';
	cout << endl;
    
}