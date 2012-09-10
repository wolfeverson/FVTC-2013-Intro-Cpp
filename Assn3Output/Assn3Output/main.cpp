#include <iostream>
#include <iomanip>
#include <sstream>
#include <conio.h>
using namespace std;
//jared everson
//intro to c++ 51009
//assignment 3 output with tabs
//9/10/12

//program outputs data in columnar and orderly fashion.


//built output stream function to concatenate dollar sign and price.
string partname(float part)
{
	string name;
	string sign = "$";
	ostringstream stream;
	stream << fixed << setprecision(2);
	stream << sign << part;
	name = stream.str();
	return name;
}


void main()
{
	//variables(float) column size(int)
	float part1 = 6.34, part2 = 8.92, part3 = 65.4, part4 = 103.45;
	int width1 = 15, width2 = 10;
	//output charts
	cout << setw(width1) << left << "PART NO."<< setw(width2) << right << "PRICE ";
	cout << setw(width1) << left << "\nT1267" << setw(width2) << right << partname(part1);
	cout << setw(width1) << left << "\nT1300" << setw(width2) << right << partname(part2);
	cout << setw(width1) << left << "\nT2401" << setw(width2) << right << partname(part3);
	cout << setw(width1) << left << "\nT4482" << setw(width2) << right << partname(part4);
	cout << "\n\nPress any key to Exit...";
	getch();
}