#include <iostream>
#include <conio.h>
#include "rec.h"
#include <string>
using namespace std;

	rec::rec()
	{
		setHeight(5);
		setWidth(5);
	}

	rec::rec(int w, int h)
	{
		setHeight(w);
		setWidth(h);
	}

	void rec::setHeight(int h)
	{
		if (h >= 5 && h <= 15)
		{
		_height = h;
		}
		else if (h > 15)
		{
			_height = 15;
		}
		else
		{
			_height = 5;
		}
	}

	void rec::setWidth(int w)
	{
		if (w >= 5 && w <= 15)
		{
		_width = w;
		}
		else if (w > 15)
		{
			_width = 15;
		}
		else
		{
			_width = 5;
		}
	}
	

	int rec::area()
	{
		return _width*_height;
	}

	int rec::peri()
	{
		return (2*_height)+(2*_width);
	}

	string rec::toString()
	{
		string output;
		for (int  h = 0; h < _height; h++)
		{
			for (int  w = 0; w < _width; w++)
			{
				if (h == 0 || h == (_height-1))
				{
					output = output + "*";
				}
				else
				{
					if (w == 0 || w == (_width-1))
					{
						output = output + "*";
					}
					else
					{
						output = output + " ";
					}
				}
			}
			output = output + "\n";
		}
		return output;
	}
