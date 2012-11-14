#include <iostream>
#include "box.h"
#include <string>
using namespace std;

box::box()
{
	setSize(10);
}

box::box(int size)
{
	setSize(size);
}

void box::setSize(int size)
{
	if (size > 1 && size <= 15)
	{
		_size = size;
	}
	else
	{
		_size = 10;
	}
}

string box::toString()
{
	string output;
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			output = output + "*";
		}
		output = output + "\n";
	}
	return output;
}

ostream& operator<<(ostream &os, const box &b)
{
	for (int i = 0; i < b._size; i++)
		{
			for (int j = 0; j < b._size; j++)
			{
				os << "*";
			}
			os << "\n";
		}
	return os;
}