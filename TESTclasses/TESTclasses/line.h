#include <iostream>
#include <conio.h>
using namespace std;

class line
{
private:
	int _height;
	int _width;

public:
	void setHeight(int h);
	void setWidth(int w);
	string toString();
};