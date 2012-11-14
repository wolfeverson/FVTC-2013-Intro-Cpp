#include <iostream>
#include <conio.h>
#include "box.h"
#include <string>
using namespace std;

void main()
{
	int size;
	box x;
	cout << "What size box?"; //default 10
	cin >> size;
	x.setSize(size);
	cout << x;
	getch();
}