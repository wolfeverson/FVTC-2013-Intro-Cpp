#include <iostream>
#include <conio.h>
using namespace std;
double maths(double won, double too);
//accepts two double precision numbers, sends them to a function to multiply, and returns the result.  skipping validation.
void main()
{
	double input1, input2;
	cout << "Please enter two numbers." << endl;
	cin >> input1 >> input2;
	cout << "Your result is... " << maths(input1, input2);
	getch();
}
double maths(double won, double too)
{
	return won * too;
}
