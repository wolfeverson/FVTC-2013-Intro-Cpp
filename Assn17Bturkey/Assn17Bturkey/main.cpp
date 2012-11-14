#include <iostream>
#include <string>
#include "turkey.h"
#include <conio.h>
using namespace std;

void main()
{
	int size;
	cout << "How tall is the turkey?(>2 && <=10)";
	cin >> size;
	turkey x(size);
	cout << x;
	getch();
}