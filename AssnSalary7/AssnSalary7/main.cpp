#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

void main()
{
	//variables
	//assuming whole hours and overtime = regular tim1 time 1.5
	//using goto for a sample program
	int hours;
	float rate, pay;
	char counter = 'n';
	//input and validation
	while (counter != 'y' && counter != 'Y')
	{
		one:
	cout << "What is your rate of pay(dollar/hour)?:";
	cin >> rate;
	if (rate < 0)
	{
		cout << "Please enter a positive rate of pay.";	
		goto one;
	}
		two:
	cout << "How many hours worked(Integer)";
	cin >> hours;
	if (hours < 0)
	{
		cout << "Please enter a positive hour count";
		goto two;
	}
	//calculations
	if (hours >= 40)
	{
		pay = (40 * rate) + ((hours-40) * (rate*1.5));
	}
	else
	{
		pay = hours * rate;
	}
	cout << fixed << setprecision(2);
	cout << endl << "For working " << hours << " hours, you earned $" << pay << endl;

	cout << "Would you like to Quit?(y/n)";
	cin >> counter;
	cout << "\n\n\n\n\n\n\n\n\n";
	}
}