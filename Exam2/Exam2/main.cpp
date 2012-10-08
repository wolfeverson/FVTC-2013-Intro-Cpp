#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
//exam 2 - input three variables and use a function call to average them.
//did not use book.
double find_average(double won, double too, double tree);

void main()
{
	//variables
	double input1, input2, input3, maths;
	char quit;
	do
	{
	//user input -- not validating.
	cout << "Enter a number:";
	cin >> input1;
	cout << "Enter a second number:";
	cin >> input2;
	cout << "Enter a third number:";
	cin >> input3;
	//calculation -- function call
	maths = find_average(input1, input2, input3);
	//output
	cout << endl << fixed << setprecision(1);
	cout << "The average of your numbers is... " << maths;
	//extra lines to organize a bit...
	cout << "\n\n\n\nWould you like to go again? -- Press 'q' to quit.\n\n\n";
	cin >> quit;
	}
	while (quit != 'q');
}

double find_average(double won, double too, double tree)
{
	return ((won + too + tree)/3);
}