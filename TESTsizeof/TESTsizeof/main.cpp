#include <iostream>
#include <iomanip>
#include <conio.h>
#include <sstream>
using namespace std;



void main()
{
	int test = 6;
	int location = *test;
	cout << location;
	cout << "The size of an integer is " << sizeof(int) << endl;
	cout << "The size of an float is " << sizeof(float) << endl;
	cout << "The size of an char is " << sizeof(char) << endl;
	cout << "The size of an boolean is " << sizeof(bool) << endl;
	cout << "The size of an short is " << sizeof(short) << endl;
	cout << "The size of an long is " << sizeof(long) << endl;
	cout << "The size of an double is " << sizeof(double) << endl;
	//string is an array and cannoy be correctly measured in general terms.
	cout << "The size of an string is " << sizeof(string) << endl;
	cout << hex << 40 << endl; //hexidecimal 0 - f
	cout << dec << 40 << endl; //decimal 0 - 9 - standard numericals
	cout << oct << 40 << endl; //octal 0 - 7

	getch();
}