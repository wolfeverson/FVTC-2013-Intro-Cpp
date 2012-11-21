#include <iostream>
#include <conio.h>
#include <string>
#include "fraction.h"
using namespace std;

void main()
{
	fraction f1 = fraction(16,32);
	fraction f2 = fraction(5,20);
	cout << "f1==" << f1 << endl << "f2==" << f2 << endl;
	fraction f3 = f1 + f2;
	f1.reduce();
	f2.reduce();
	fraction f3r = f3;
	f3r.reduce();
	cout << "f3==" << f3 << "------" <<  f3r;
	getch();
}