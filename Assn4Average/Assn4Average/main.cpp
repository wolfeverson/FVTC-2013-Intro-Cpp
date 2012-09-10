#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
//jared everson
//intro C++ 51009
//Assignment 4 Average
//9/10/2012


//program will designate variables, total, average them, and display all.
//total 4 decimal, average 1 decimal
void main()
{
	//declare variables for numbers, total, and average -- and calculate
	float firstnum = 106.54, secondnum = 89.532, thirdnum = 98.76;
	float total = firstnum + secondnum + thirdnum, average = total / 3;
	//displays
	cout << "The Numbers are:\n----------------\n";
	cout << firstnum << endl << secondnum << endl << thirdnum << endl;
	//update output to 4 decimals for total display
	cout << fixed << setprecision(4);
	cout << "\nThe Total is:\n-------------\n";
	cout << total << endl;
	//update output to 1 decimal for average display
	cout << setprecision(1);
	cout << "\nThe Average is:\n---------------\n";
	cout << average;
	//closing
	cout << "\n\n\n\n\n\nPress Any Key to Exit....";
	getch();
}