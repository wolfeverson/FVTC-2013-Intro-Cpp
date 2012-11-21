#include <iostream>
#include <string>
using namespace std;

class fraction
{
private:

public:
	fraction();
	fraction(int, int);
	int top;
	int bottom;
	void reduce();
	double toDouble();
	friend ostream& operator <<(ostream&, fraction&);
	friend fraction& operator +(fraction&, fraction&);
};