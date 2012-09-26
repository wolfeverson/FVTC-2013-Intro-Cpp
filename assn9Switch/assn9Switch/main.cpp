#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
//accepts a number to be transformed and a char to determine which equation to use
//as assignment 8, using switch instead of if
void main()
{
	//variables
	int input;
	char test;
	float maths;
	//input
	cout << "Input an integer for temperature value: ";
	cin >> input;
	cout << "Fahrenheit to Celcius(F)...or Celcius to fahrenheit(C)? ";
	cin >> test;
	cout << fixed << setprecision(2) << endl; //set decimal limit to two.
	//verification, calculation, output
	switch(test)
	{
	case 'C':
	case 'c':
		maths = (9.0f/5.0f)*input+32.0f;
		cout << input << " in celcius is " << maths << " in fahrenheit";
		break;
	case 'F':
	case 'f':
		maths = (5.0f/9.0f)*(input-32.0f);
		cout  << input << " in fahrenheit is " << maths << " in celcius";
		break;
	default:
		cout << endl << "Error.  Terminate.";
		break;
	}
	//close
	cout << "\n\n\n\n\nPress any key to close";
	getch();
}