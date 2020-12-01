#include "std_lib_facilities.h"

vector<int> gv { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(vector<int> v)
{
	vector<int> lv(v.size());
	lv = gv;

	for(int i = 0; i < lv.size(); ++i)
		cout << lv[i] << ' ';
	cout << endl;

	vector<int> lv2(v);
	for(int i = 0; i < lv2.size(); ++i)
		cout << lv2[i] << ' ';
	cout << endl;
}

int main()
try {
	f(gv);
	vector<int> vv;
	vv.push_back(1);
    for (int i = 1; i<10; ++i)
        vv.push_back((i+1)*vv[i-1]);
	f(vv);

	return 0;
} catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
}
catch (...) {
    cerr << "exception\n";
}