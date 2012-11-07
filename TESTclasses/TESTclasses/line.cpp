#include <iostream>
#include <conio.h>
#include "line.h"
#include <string>
using namespace std;

void line::setHeight(int h)
{
	if (h > 0 && h < 100)
	{
	_height = h;
	}
	else if ( h > 100)
	{
		_height = 100;
	}
}

	void line::setWidth(int w)
	{
	if (w > 0 && w < 100)
	{
		_width = w;
	}
	else if ( 2 > 100)
	{
		_width = 100;
	}


	}

	string line::toString()
	{
		string output;
		for (int h = 0; h < _height; h++)
		{
			for (int w = 0; w < _width; w++)
			{
				output = output + "*";
			}
			output = output + "\n";
		}
		return output;
	}