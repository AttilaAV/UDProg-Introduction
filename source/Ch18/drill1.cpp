#include "std_lib_facilities.h"

int ga[10] { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(int ai[], int n)
{
	int las = 10; //la.size
	int la[las] { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	for (int i = 0; i < las; ++i)
		la[i] = ga[i];

	for(const auto& a : la)
		cout << a << ' ';
	cout << endl;

	int* p = new int[n];
    for (int i = 0; i < n; ++i) p[i] = ai[i];
    
    cout << "Pointer to free store\n";
    for (int i = 0; i < n; ++i)
        cout << p[i] << ' ';
    cout << '\n';

    delete[] p;

}


int main()
{
	f(ga,10);
	const int aas = 10; //size of aa
	int aa[aas] = { 1 };
	for (int i = 1; i<aas; ++i) aa[i] = aa[i-1]*(i+1); // 10!, 9!.....
	f(aa,aas);
	return 0;
}