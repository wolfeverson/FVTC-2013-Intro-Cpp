#include <iostream>
#include <conio.h>
#include <string>
#include "rec.h"
using namespace std;

void main()
{
	int width, height;
	cout << "Please enter rectangle height(5-15)" << endl; //random limits
	cin >> height;
	cout << "Please enter rectangle width(5-15)" << endl;
	cin >> width;

	rec r(width, height);
	cout << "The Area of your rectangle is: " << r.area() << endl;
	cout << "The Perimeter of your rect is:  " << r.peri() << endl;
	cout << r.toString();

	getch();
}