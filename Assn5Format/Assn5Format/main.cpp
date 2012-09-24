#include <iostream>
#include <iomanip>
#include <conio.h>
#include <sstream>
using namespace std;
//jared everson
// intro c++ 51009
// Assignment 5 Formatting Output
//9/12/2012

//program formats output and style for numbers....
void main()
{
	//variables
	int numint = 32;
	double numdub = 42.98765;
	//outputting in hex and octal
	cout << "The Hex Value of 32 is... " << hex << numint << endl
		 << "The Octal Value of 32 is... " << oct << numint << endl;
	//blank line and reset formatting
	cout << endl << dec;
	
	//outputting repeated lines with increasing precision
	//used shrinking column widths to maintain visual preciseness
	int counter = 3;
	do 
	{
		cout << fixed <<setprecision(counter) << setw(10-counter) << left << "|" << numdub << "|" << endl;
		counter ++;
	}
	while (counter < 7);
	//blankline
	cout << endl;

	//output int and double with set widths.
	cout << "|" << setw(5) << right << numint << "|" << setw(10) << setprecision(2) << right << numdub << "|";
	//closing
	cout << "\n\n\n\n\n\n\nPress Any Key To Close";
	getch();
}