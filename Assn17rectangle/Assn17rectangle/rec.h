#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class rec
{
private:
	int _width;
	int _height;

public:
	rec();
	rec(int w, int h);
	void setHeight(int h);
	void setWidth(int w);
	int area();
	int peri();
	string toString();
};


