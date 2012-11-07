#include <iostream>
#include <conio.h>
#include "line.h"
#include <string>
using namespace std;



void main()
{
	line l;
	l.setWidth(10);
	l.setHeight(1);
	cout << l.toString();

	line myline;
	myline.setHeight(20);
	myline.setWidth(4);
	cout << myline.toString();



	getch();
}