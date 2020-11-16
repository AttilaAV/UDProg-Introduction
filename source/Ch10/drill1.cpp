//Start a program to work with points, discussed in §10.4. 
//Begin by defining the data type Point that has two coordinate members x and y.

#include "std_lib_facilities.h"

struct Point {
	double x,y;
};

//readable
istream& operator>>(istream& is, Point& p)
{
    char ch1;
    if (is >> ch1 && ch1 != '(') {
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }
    char ch2;
    char ch3;
    double xx;
    double yy;
    is >> xx >> ch2 >> yy >> ch3;
    if (!is || ch3 != ')') {
        if (is.eof()) return is; //endoffile
        error("bad point");
    }
    p.x = xx;
    p.y = yy;
    return is;
}

//printable
ostream& operator<<(ostream& os, Point& p)
{
    return os << '(' << p.x << ',' << p.y << ')';
}


int main()
try{

//drill1
	Point p;
	p.x = 50;
	p.y = 6060.6;
	cout << p.x << " " << p.y << endl;

//drill2
	cout << "Please enter 7 vectors (double valuse) in the following form (x,y)" << endl;
	vector<Point> original_points;
	while (original_points.size() < 7){
		cin >> p;
		original_points.push_back(p);
	}

//drill3
	cout << "Printing your vectors..." << endl;
	for (Point p : original_points) cout << p << endl;

//drill4
	string oname;
    oname = "mydata.txt";
    ofstream ost {oname};

    if (!ost) error("can't open inputfile ", oname);

    for (const auto& r : original_points)
    	ost << "(" << r.x << "," << r.y << ")";
    ost.close();

//drill5
	string iname;
	iname = "mydata.txt";
	ifstream ist {iname};

	vector<Point> processed_points;
    for (Point p; ist >> p; )
        processed_points.push_back(p);

//drill6
    for (Point p : processed_points)
    	cout << p << endl;

//drill7

    if (original_points.size() == processed_points.size()) 
    	cout << "They are the same size." << endl;
    else
    	cout << "oops :( their size is not the same" << endl;
    return 0;
}
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
