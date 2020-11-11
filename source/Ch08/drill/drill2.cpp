#include "std_lib_facilities.h"

void swap_v(int a, int b)
{
	int temp{0};
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b)
{
	int temp{0};
	temp = a;
	a = b;
	b = temp;
}

/* THIS FUNC WONT COMPILE BECAUSE CONSTS ARE READ-ONLY
error: assignment of read-only reference ‘a’ 'b'
void swap_cr(const int& a, const int& b)
{
	int temp{0};
	temp = a;
	a = b;
	b = temp;
}
*/

int main()
{
	int x = 7;
	int y = 9;
	cout << "x = " << x << " y = " << y << endl;
	cout << "calling swap_r" << endl;
	swap_r(x,y);
	cout << "x = " << x << " y = " << y << endl << endl;

	cout << "x = " << x << " y = " << y << endl;
	cout << "calling swap_v" << endl;
	swap_v(x,y);
	cout << "x = " << x << " y = " << y << endl << endl; // nothing changes cus, they are only swaped in the function
	//swap_r(7, 9);
	const int cx = 7;
	const int cy = 9;
	//not working with const, read only!
}