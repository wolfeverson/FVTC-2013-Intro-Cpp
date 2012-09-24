#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
//extra credit assignment
void main()
{
	//variables
	float far, cel;
	//input
	cout << fixed << setprecision(2);
	cout << "Please input temperature to convert from celcius: ";
	cin >> cel;
	//calculate
	far = (9.0f/5.0f)*cel+32.0f;
	//output
	cout << "Your temperature is " << far << " degrees";
	//close
	cout << "\n\n\n\n\nPress Any key to end";
	getch();
}
