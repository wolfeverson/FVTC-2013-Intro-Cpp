#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

/*Write a C++ program that displays the following output:
Enter the miles driven: 47.3
Enter the gallons of gas used: 3
Miles Per Gallon: 15.8
The numeric miles and gallons values should be stored in (and output by) appropriate 
variables, and the miles per gallon should be the result of the following formula: miles per 
gallon = (miles driven / gallons of gas used).
Display the result with 1 decimal point precision.
Be sure to include appropriate comments!*/

void main()
{
	//declare variables -- all as double to allow for very high input with decimal precision
	double miles, gallons, mpg;

	//user input
	cout << "How many miles driven?";
	cin >> miles; 
	cout << endl << "How many gallons used?";
	cin >> gallons;

	//calculation
	mpg = miles/gallons;

	//output to user
	cout << fixed << setprecision(1) << endl;
	cout << "Miles Driven: " << miles << endl;
	cout << "Gallons Used: " << gallons << endl;
	cout << "Average Miles Per Gallon: " << mpg;
	
	//program close
	cout << "\n\n\n\n\nPress Any Key to Exit...";
	getch();
}